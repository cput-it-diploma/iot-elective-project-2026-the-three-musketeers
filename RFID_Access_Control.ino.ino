/*
 * RFID Access Control System
 * 
 * This system controls a door lock using an RFID card and a motion sensor.
 * When an authorized person taps their card and walks through the door,
 * the door unlocks for a few seconds and then locks again automatically.
 * 
 * Hardware needed:
 * - Arduino board like Uno, Nano, or Mega
 * - MFRC522 RFID reader module
 * - 5 volt relay module
 * - IR motion sensor
 * 
 * Pin connections:
 * - RFID SS pin  -> Arduino pin 10
 * - RFID RST pin -> Arduino pin 9
 * - Relay signal  -> Arduino pin 7
 * - IR sensor out -> Arduino pin 8
 */

#include <SPI.h>
#include <MFRC522.h>

// Pin numbers
#define RST_PIN 9
#define SS_PIN 10
#define RELAY_PIN 7      
#define IR_SENSOR_PIN 8  

// How long the door stays open, measured in milliseconds
#define DOOR_UNLOCK_DURATION 5000  

MFRC522 mfrc522(SS_PIN, RST_PIN);

// This is the only card that is allowed to open the door
// Replace these numbers with your own card's unique ID
byte authorizedCard[] = {0x39, 0xBA, 0x98, 0x04};

// Variables that keep track of what is happening
bool accessGranted = false;      
bool doorUnlocked = false;       
unsigned long lockTimer = 0;     
bool lastSensorState = HIGH;     
unsigned long lastCardRead = 0;  
int readFailCount = 0;           
unsigned long lastResetTime = 0;

void setup() {
    // Start communication with the computer's serial monitor
    Serial.begin(9600);
    
    // Set up the control pins
    pinMode(RELAY_PIN, OUTPUT);
    pinMode(IR_SENSOR_PIN, INPUT_PULLUP);
    
    // Start with the door locked. The relay is off.
    digitalWrite(RELAY_PIN, HIGH);
    
    // Initialize the RFID reader
    SPI.begin();
    delay(200);
    mfrc522.PCD_Init();
    delay(200);
    
    // Show a welcome message on the serial monitor
    Serial.println("=================================");
    Serial.println("RFID ACCESS CONTROL SYSTEM");
    Serial.println("=================================");
    Serial.println("System ready. Tap your card to begin.");
    Serial.println("=================================");
    Serial.println();
}

/*
 * This function checks whether the scanned card matches the authorized one.
 * It compares each byte of the card UID.
 * Returns true if the card is allowed, false otherwise.
 */
bool isAuthorized(byte *cardUID) {
    for (int i = 0; i < 4; i++) {
        if (cardUID[i] != authorizedCard[i]) {
            return false;
        }
    }
    return true;
}

/*
 * If the RFID reader stops responding, this function resets it.
 */
void resetRFIDReader() {
    Serial.println("Resetting RFID reader...");
    digitalWrite(RST_PIN, LOW);
    delay(100);
    digitalWrite(RST_PIN, HIGH);
    delay(100);
    mfrc522.PCD_Init();
    delay(100);
}

void loop() {
    
    //  Part One: Check for an RFID card
    
    if (mfrc522.PICC_IsNewCardPresent()) {
        if (mfrc522.PICC_ReadCardSerial()) {
            // The card was read successfully
            readFailCount = 0;
            lastCardRead = millis();
            
            // Show the card's unique ID on the serial monitor
            Serial.print("Card UID: ");
            for (byte i = 0; i < mfrc522.uid.size; i++) {
                Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? "0" : "");
                Serial.print(mfrc522.uid.uidByte[i], HEX);
                if (i < mfrc522.uid.size - 1) Serial.print(" ");
            }
            Serial.println();
            
            // Decide if the card is allowed
            if (isAuthorized(mfrc522.uid.uidByte)) {
                Serial.println("Access granted. Walk past the sensor to unlock the door.");
                accessGranted = true;
            } else {
                Serial.println("Access denied. The door stays locked.");
                Serial.println("Please tap your registered card.");
                accessGranted = false;
            }
            
            // Stop reading this card so we can read the next one
            mfrc522.PICC_HaltA();
            mfrc522.PCD_StopCrypto1();
            delay(500);
            
        } else {
            // Something went wrong while reading the card
            readFailCount++;
            if (readFailCount >= 5) {
                resetRFIDReader();
                readFailCount = 0;
                lastResetTime = millis();
            }
        }
    }
    
    //  Part Two: Check the IR motion sensor
    
    int sensorState = digitalRead(IR_SENSOR_PIN);
    
    // We are looking for the moment the sensor changes from no motion to motion
    if (lastSensorState == HIGH && sensorState == LOW) {
        Serial.println("Motion detected.");
        delay(50);  // This small delay helps ignore false readings
        sensorState = digitalRead(IR_SENSOR_PIN);
        
        if (sensorState == LOW) {  // Confirm that motion really happened
            if (accessGranted && !doorUnlocked) {
                Serial.println("Unlocking the door now.");
                digitalWrite(RELAY_PIN, LOW);  // Turn relay on to unlock
                doorUnlocked = true;
                lockTimer = millis();
                Serial.println("The door will lock again in 5 seconds.");
                Serial.println();
            } 
            else if (!accessGranted) {
                Serial.println("No authorization. Please tap your card first.");
                Serial.println();
            }
            else if (doorUnlocked) {
                Serial.println("The door is already unlocked.");
                Serial.println();
            }
        }
    }
    lastSensorState = sensorState;
    
    //  Part Three: Lock the door automatically after a delay
    
    if (doorUnlocked && (millis() - lockTimer >= DOOR_UNLOCK_DURATION)) {
        Serial.println("Locking the door now.");
        digitalWrite(RELAY_PIN, HIGH);  // Turn relay off to lock
        doorUnlocked = false;
        accessGranted = false;
        
        Serial.println();
        Serial.println("=================================");
        Serial.println("Person entered. Door is now locked.");
        Serial.println("=================================");
        Serial.println("Ready for the next person.");
        Serial.println("Please tap your card to begin.");
        Serial.println("=================================");
        Serial.println();
    }
    
    delay(50);  // A short pause to keep the system stable
}