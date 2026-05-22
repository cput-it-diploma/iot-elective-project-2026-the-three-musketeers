<img width="1125" height="70" alt="image" src="https://github.com/user-attachments/assets/680c2c94-59c1-4683-99f2-e3b8c50cedc1" /><img width="583" height="70" alt="image" src="https://github.com/user-attachments/assets/547f2173-7693-4094-822e-4a90c0f81c12" />[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/AnR2QgvN)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=22947230&assignment_repo_type=AssignmentRepo)
# 🌐 IoT Elective Project 2026
### Cape Peninsula University of Technology — IT Diploma
**Module:** Internet of Things (IoT) Elective | **Year:** 2026

---

## 📋 Table of Contents

1. [Project Overview](#project-overview)
2. [Group Members](#group-members)
3. [Project Idea & Problem Statement](#project-idea--problem-statement)
4. [System Architecture & Design](#system-architecture--design)
5. [Hardware Components](#hardware-components)
6. [Software & Technologies](#software--technologies)
7. [Circuit Diagram / Wiring](#circuit-diagram--wiring)
8. [Build Process (with photos)](#build-process-with-photos)
9. [Code Documentation](#code-documentation)
10. [Testing & Results](#testing--results)
11. [Challenges & Solutions](#challenges--solutions)
12. [Project Demonstration](#project-demonstration)
13. [References](#references)
14. [Assessment Rubric](#assessment-rubric)

---

## 📌 Project Overview

**Project Title:** `[RFID/NFC lock system]`  
**Group Name / Number:** `[TThe Three Musketeers]`  
**Presentation Date:** End of April 2026

---

## 👥 Group Members

| 	Student Name	 | 	Student Number	 | 	Role/Responsibility	 | 
| 	:-----:	 | 	:-----:	 | 	:-----:	 | 
| 	Sisonke Mhlana	| 	221805486	| 	Designs and builds the circuit (Arduino, RFID reader, relay, lock, sensors), Tests RFID card reading accuracy and system response, Explains system workflow clearly to audience		 | 
| 	Emmanuel Posholi	| 	222144408	| 	Writes project report (problem statement, objectives), Prepares PowerPoint presentation, Presents the project during demonstrations, Integrates RFID/NFC logic with system actions	 | 
| 	Minathi Shezi	| 	222353775	| 	Writes and debugs Arduino code (C/C++) ,Ensures code is efficient and error-free Verifies access granted/denied conditions, error-free Verifies access granted/denied conditions	 | 

---

## 💡 Project Idea & Problem Statement

### Problem Statement
Many universities currently use RFID-based door access systems to manage entry into facilities such as lecture halls, laboratories, libraries, and student residences. However, these systems face several challenges, including weak security encryption, dependence on physical cards that can be lost or shared, limited real-time monitoring, and poor integration with modern technologies. In some cases, unauthorized individuals may gain access using stolen or duplicated RFID cards, which compromises campus security. Additionally, managing and updating access permissions across multiple buildings can become inefficient and time-consuming for university administrators.

### Proposed Solution
To solve these challenges, this project proposes upgrading the existing RFID system to an NFC-based door lock system. The new system will use NFC-enabled student cards and smartphones to provide faster, more secure, and more convenient authentication. NFC technology offers stronger encryption and better compatibility with modern mobile devices, reducing the risks associated with lost or duplicated cards. The system will also include centralized access management, real-time monitoring, and digital logging of entry and exit records. This solution will improve campus security, simplify access control management, and support the university’s move toward smarter and more modern technology systems. Due to component limitations, our prototype uses a physical student card or tag instead of a phone. However, the working system proves the concept. Future implementation with the university app would eliminate physical cards entirely.

### Objectives
- [To develop a cost-effective and scalable system that can be implemented across multiple university departments and facilities. ] Objective 1
- [To reduce dependency on physical keys and card ] Objective 2
- [To enhance convenience for users by enabling quick and contactless access to university buildings. ] Objective 3

---

## 🏗️ System Architecture & Design

![System Architecture Diagram](images/architecture_diagram.png)

### Design Decisions
> _Explain the key design decisions your group made._

---

## 🔧 Hardware Components

|  Component  |  Description  |	Quantity  |	Purpose  |
|  :-----:  |  :-----:  |  :-----  |  :-----  |
|  Arduino Uno  |  A microcontroller development board used to control electronic components and execute programmed instructions.  |  1  |  Acts as the main controller of the RFID/NFC door lock system by processing input from sensors and controlling the lock mechanism.  |
|  Relay Moddule  |  An electrically operated switch that allows low-voltage devices to control high-voltage components safely.  |  2  |  Used to switch the 12V solenoid lock ON or OFF based on authorization from the Arduino Uno.  |
|  12V Solenoid lock  |  An electronic locking device that uses electromagnetic force to lock or unlock a door.  |  1  |  It locks and unlocks the door physically when access is granted or denied.  |
|  IR sensor  |  Used to detect the presence or movement of objects.  |  1  |  Detects whether the door is open or closed, or senses motion near the door for security and automation purposes.  |
|  Bread board  |  A reusable board used for prototyping electronic circuits.  |  1  |  To allow easy connection and testing of components during system development.  |
|  RFID-RC522  |  module used to read RFID cards and tags.  |  1  |  To read and verifies RFID/NFC cards or tags to authenticate authorized users.  |
|  Buzzer  |  An audio signaling device that produces sound alerts or notifications.  |  1  |  Provides sound feedback for successful or failed access attempts.  |
|  LED light  |  A light-emitting diode used as a visual indicator in electronic systems.  |  2  |  Indicates system status, such as access granted (green LED) or access denied (red LED).  |
|  DSTV power Supply  |  A power adapter commonly used in electronic setups to provide stable DC voltage.   |  1  |  To act as the main power supply that supply the whole system with power, ensuring a stable operation of the Arduino, Relay and solenoid lock.  |

---

## 💻 Software & Technologies

| Tool / Platform | Purpose |
|---|---|
| Arduino IDE | Used to write, compile, and upload code to the Arduino Uno for controlling the RFID/NFC door lock system. |
| GitHub | Documentation |

---

## 🔌 Circuit Diagram / Wiring

![circuit_diagram.png](https://github.com/cput-it-diploma/iot-elective-project-2026-the-three-musketeers/blob/f8620d01950c09f9920d2a4e78889c7633a01d5b/circuit%20diagram.jpeg)

## RFID Door Lock System Connections

| Component / Module | Pin / Wire | Connected To |
|---|---|---|
| RFID Module | SDA | Arduino Digital Pin 10 |
| RFID Module | SCK | Arduino Digital Pin 13 |
| RFID Module | MOSI | Arduino Digital Pin 11 |
| RFID Module | MISO | Arduino Digital Pin 12 |
| RFID Module | GND | Arduino GND |
| RFID Module | RST | Arduino Digital Pin 9 |
| RFID Module | 3.3V | Arduino 3.3V |
| Arduino | Digital Pin 3 | 1K Ohm Resistor |
| 1K Ohm Resistor | Output | LED Positive Pin (+) |
| LED | Negative Pin (-) | Arduino GND |
| Relay Module | VCC (+) | Arduino 5V |
| Relay Module | GND (-) | Arduino GND |
| Relay Module | Signal Pin (S) | Arduino Digital Pin 2 |
| 12V Power Supply | Positive (+) | Electromagnetic Lock Red Wire (+) |
| 12V Power Supply | Negative (-) | Relay COM Pin |
| Electromagnetic Lock | Black Wire (-) | Relay NO Pin |
---

## 🏭 Build Process (with photos)

### Step 1: Work space preparation
Clear a desk/table surface

Place Arduino Uno in front of you

Place breadboard next to Arduino
Keep laptop/USB power within reach

![Step 1 Photo](images/build_step1.jpg)

### Step 2:  RFID Module Connections

Locate the RFID pins and connect them to their corresponding Arduino Uno pins. as follows,
## RFID connection table

| RFID Pin     | Arduino Uno Pin | 
|--------------|----------------|
| SDA (SS)     | Pin 10         |
| SCK          | Pin 13         | 
| MOSI         | Pin 11         | 
| MISO         | Pin 12         | 
| RST          | Pin 9          | 
| 3.3V         | 3.3V (NOT 5V)  | 
| GND          | GND            | 


![Step 2 Photo](images/build_step2.jpg)

### Step 3: Relay Module Connection

Locate the Relay Module pins and connect them to their corresponding Arduino Uno pins. as follows,
## Relay Module Connection Table

| Relay Pin | Arduino Pin |
|----------|-------------|
| VCC      | 5V          |
| GND      | GND         |
| IN1      | Pin 7       |

### Step 4: 12V Solenoid lock  + Power Supply
Locate the 3 screw terminals on your relay (usually labeled):
         - COM (Common)
         - NC (Normally Closed)  
         - NO (Normally Open)
         
         -Take a wire from 12V adapter's POSITIVE (+) wire connect it to relay "COM" terminal
         
         -Take another wire. Connect relay "NO" terminal to Door lock's POSITIVE (+) wire.
         
         -Take 's NEGATIVE (-) wire. Connect it DIRECTLY to 12V adapter's NEGATIVE (-) wire.
         
         -DO NOT PLUG IN 12V ADAPTER YET

### Step 5: IR Sensor connection

-connect wire from IR "VCC" to Arduino "5V"

-connect wire from IR "GND" to Arduino "GND

-connect  wire from IR "OUT" to Arduino "Pin 3"

-Position IR sensor so it will detect someone walking through a doorway

### Step 6: Upload Code

 -Connect Arduino to computer via USB cable
 
 -Open Arduino IDE on your computer
 
 -upload the code

 ### Step 7: Test RFID

 Open Serial Monitor
 
-Set baud rate to 9600

-Tap your student card on the RFID reader

-You should see "Card UID: XX XX XX XX" in Serial Monitor

-Buzzer should beep

-should CLICK (you'll hear it)

---

## 🖥️ Code Documentation

### Main Firmware (e.g., `main.ino`)

```cpp

void setup() {
    
    Serial.begin(9600);
    
    
    pinMode(RELAY_PIN, OUTPUT);
    pinMode(IR_SENSOR_PIN, INPUT_PULLUP);
    
   
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
}
```

### Key Functions

| Function Name | Description |
|---|---|
|  setup() | Initializes serial communication, relay pin, IR sensor pin, RFID reader, and displays the welcome message |
|  loop() | Main program loop that checks RFID cards, monitors the IR sensor, and controls the door lock system |
|  isAuthorized()  | Compares the scanned RFID card UID with the authorized card UID to check access permission |
|  resetRFIDReader()  | Resets and reinitializes the RFID reader when reading errors occur |
|  PICC_IsNewCardPresent() | Detects whether a new RFID card is placed near the reader |
|  PICC_ReadCardSerial() | Reads the UID (unique ID) of the RFID card |
|  PICC_HaltA()  | Stops communication with the current RFID card |
|  PCD_StopCrypto1()  | Stops encrypted communication between the RFID reader and card |
|  PCD_Init()  | Initializes the MFRC522 RFID reader module |
|  SPI.begin()  | Starts SPI communication between the Arduino and RFID module |
|  Serial.begin()  | Starts serial communication with the computer |
|  pinMode()  | Configures pins as input or output |
|  digitalWrite()  | Sends HIGH or LOW signals to control components like the relay |
|  digitalRead()  | Reads the current state of the IR sensor |
|  millis()  | Returns the time in milliseconds since the Arduino started running |
|  delay()  | Pauses the program for a short amount of time |
---

## 🧪 Testing & Results

| Test # | Description | Expected Result | Actual Result | Pass/Fail |
|---|---|---|---|---|
| 1 | RFID reader | reads card | reads | ✅ Pass |
| 2 | lock gate | 5 sec after unlocking | locks after 5 seconds |  ✅ Pass |
| 3 | LED flickers when there is movement | LED to Flicker | flickers | ✅ Pass 
| 4 | Relay Module to click after unlocking| Relay to click | doesn't click | ❎ fail

---

## ⚠️ Challenges & Solutions

| Challenge Encountered | Solution Applied |
|---|---|
| Arduino not reading | Reinstalled CH340/Arduino drivers. Selected the correct COM port and board (Arduino Uno) in Arduino IDE|
| No power supply for the 12V Solenoid lock | DSTV adapter was used as an alternative poer supply, which provided the needed 12V DC power |
| Solenoid Lock getting burnt | we could find an alternative solution hence it got burnt the day before presentation |

---

## 🎥 Project Demonstration

- 📹 **Demo Video:** [Insert link here]
- 📊 **Presentation Slides:** (https://github.com/cput-it-diploma/iot-elective-project-2026-the-three-musketeers/blob/main/The%20Three%20Musketeers_Presentation.pptx)
- 🔗 **Live Dashboard (if applicable):** [Insert link here]

---

## 📚 References

1. [Ardiuno RFID|how to use RFID RC522 with Ardiuno](https://youtu.be/pdBrvLGH0PE?si=7686agDW0Khmpqe8) 
2. [How to build a smart RFID door lock ](https://www.pcbway.com/project/shareproject/Using_Arduino_to_Build_a_Smart_RFID_Door_Lock_System_d1ab29bf.html)

---

## 📊 Assessment Rubric

> ⚠️ **Students: Do NOT modify this section.**

### 📝 T1 — 50 Marks

| Criteria | Excellent (5) | Good (4) | Satisfactory (3) | Needs Improvement (2) | Incomplete (0-1) | Marks |
|---|---|---|---|---|---|---|
| Project Proposal & Problem Statement | Clear, detailed, well-researched | Clear with minor gaps | Stated but lacks depth | Vague | Not submitted | /5 |
| System Design & Architecture | Detailed diagram + design decisions | Good diagram with some docs | Basic diagram | Incomplete | Not submitted | /5 |
| Hardware Component Selection | All justified with images | Most documented | Listed not justified | Incomplete | Not attempted | /5 |
| Circuit Diagram / Wiring | Complete + pin mapping | Mostly complete | Partial | Incomplete | Not submitted | /5 |
| GitHub Repository Setup | Well-structured, clear commits | Good with minor issues | Basic structure | Minimal | Repo not set up | /5 |
| Markdown Documentation Quality | Excellent: headings, tables, images, code | Good with minor issues | Basic Markdown | Minimal | None | /5 |
| GitHub Commit History (T1) | Regular commits, all members | Regular, most members | Some commits | Few | None | /5 |
| Initial Code / Prototype | Working + well-commented | Working + some comments | Partial prototype | Started, not working | None | /5 |
| Group Collaboration Evidence | Issues, PRs, commits from all | Good evidence | Some evidence | Minimal | None | /5 |
| Build Progress Photos | Step-by-step + descriptions | Good photos | Photos, few descriptions | Few photos | None | /5 |
| | | | | | **T1 Total** | **/50** |

---

### 📝 T2 — 50 Marks *(Final Presentation: End of April 2026)*

| Criteria | Excellent (5) | Good (4) | Satisfactory (3) | Needs Improvement (2) | Incomplete (0-1) | Marks |
|---|---|---|---|---|---|---|
| Final Working Project | Fully functional | Mostly functional | Partially functional | Limited functionality | Not functional | /5 |
| Live Demonstration | Confident, all features | Good, minor issues | Core features shown | Partial/unclear | No demonstration | /5 |
| Testing & Results Documentation | All tests + analysis | Most documented | Some documented | Minimal | None | /5 |
| Code Quality & Comments | Clean, structured, fully commented | Good, most commented | Works, lacks comments | Messy/partial | None | /5 |
| Markdown Documentation Quality (T2) | Complete professional README | Good with minor gaps | Most sections filled | Incomplete | Minimal/none | /5 |
| GitHub Commit History (T2) | Consistent, all members | Good, most members | Some commits | Few | None | /5 |
| Challenges & Solutions | All documented with solutions | Most documented | Some documented | Vague | Not documented | /5 |
| System Architecture (Final) | Updated, matches build | Mostly matches | Partially updated | Outdated | Not present | /5 |
| Presentation Quality | Professional, all members | Good, all contribute | Acceptable | Weak/incomplete | None | /5 |
| References & Attribution | All properly listed | Most listed | Some listed | Minimal | None | /5 |
| | | | | | **T2 Total** | **/50** |

---

### 🏆 Final Mark Summary

| Term | Marks Available | Marks Achieved |
|---|---|---|
| T1 | 50 | /50 |
| T2 | 50 | /50 |
| **Total** | **100** | **/100** |

---

> 📌 **Assessed by:** `[Lecturer Name]`  
> 📅 **Final Submission Deadline:** End of April 2026  
> 🏫 **Institution:** Cape Peninsula University of Technology (CPUT)

---

*Documented using Markdown on GitHub — CPUT IT Diploma IoT Elective 2026* 🚀
