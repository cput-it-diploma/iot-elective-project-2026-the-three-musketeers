[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/AnR2QgvN)
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

![Circuit Diagram](images/circuit_diagram.png)

| Component Pin | Microcontroller Pin | Notes |
|---|---|---|
| [e.g. DHT11 DATA] | [e.g. D2] | [Pull-up resistor required] |
| [e.g. LED +] | [e.g. D13] | [220Ω resistor in series] |

---

## 🏭 Build Process (with photos)

### Step 1: [Step Title]
> _Description of what was done._

![Step 1 Photo](images/build_step1.jpg)

### Step 2: [Step Title]
> _Description of what was done._

![Step 2 Photo](images/build_step2.jpg)

---

## 🖥️ Code Documentation

### Main Firmware (e.g., `main.ino`)

```cpp
void setup() {
  Serial.begin(9600);
  // Initialize sensors and pins here
}

void loop() {
  // Main logic here
}
```

### Key Functions

| Function Name | Description |
|---|---|
| `setup()` | Initializes hardware peripherals and serial communication |
| `loop()` | Main execution loop |
| `[yourFunction()]` | [Describe it] |

---

## 🧪 Testing & Results

| Test # | Description | Expected Result | Actual Result | Pass/Fail |
|---|---|---|---|---|
| 1 | [e.g. Sensor reads temperature] | [e.g. ±2°C accuracy] | [e.g. ±1.5°C] | ✅ Pass |
| 2 | [e.g. Wi-Fi transmission] | [e.g. Every 10s] | | |

---

## ⚠️ Challenges & Solutions

| Challenge Encountered | Solution Applied |
|---|---|
| [e.g. Wi-Fi connection drops] | [e.g. Added reconnect logic] |
| [e.g. Noisy sensor readings] | [e.g. Applied moving average filter] |

---

## 🎥 Project Demonstration

- 📹 **Demo Video:** [Insert link here]
- 📊 **Presentation Slides:** [Insert link here]
- 🔗 **Live Dashboard (if applicable):** [Insert link here]

---

## 📚 References

1. [Reference Title](https://link-to-reference.com) — _Brief description_
2. [Reference Title](https://link-to-reference.com) — _Brief description_

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
