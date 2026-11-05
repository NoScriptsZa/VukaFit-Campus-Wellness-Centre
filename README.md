# VukaFit Campus Wellness Centre

### C++ Programming Assignment

**Student Name:** Aneeq Harris  
**Student Number:** EDUV12967292  
**Programming Language:** C++  
**Development Environment:** Visual Studio Code / OnlineGDB

---

## Project Overview

This project consists of four independent C++ console applications developed for the VukaFit Campus Wellness Centre.

The applications demonstrate fundamental procedural programming concepts, including:

- Variables and constants
- Data types and input/output
- Selection statements (`if`, `else`, `switch`)
- Loops (`for`, `while`)
- Functions
- One-dimensional and two-dimensional arrays
- Input validation
- Mathematical calculations

Each question is implemented in a separate `.cpp` file and can be compiled and executed independently.

---

## Project Structure

| File | Description |
|---|---|
| `Question1.cpp` | Student membership quotation system |
| `Question2.cpp` | Wellness session booking system |
| `Question3.cpp` | Daily student check-in system |
| `Question4.cpp` | Weekly attendance analytics system |

---

## System Requirements

To compile and run the applications, the following are required:

- Windows, Linux or macOS
- A C++ compiler (such as GCC)
- Visual Studio Code or an online C++ compiler
- Internet connection when using OnlineGDB

---

## How to Compile and Run

### Option 1: OnlineGDB

1. Visit [OnlineGDB C++ Compiler](https://www.onlinegdb.com/online_c++_compiler).
2. Select C++ as the programming language.
3. Open the required `.cpp` file on your computer.
4. Copy the source code into the OnlineGDB editor.
5. Click **Run**.
6. Follow the instructions displayed in the console.

### Option 2: Visual Studio Code

1. Open Visual Studio Code.
2. Open the folder containing the project files.
3. Open the required `.cpp` file.
4. Open the integrated terminal.
5. Compile the program using GCC.

Example:

```bash
g++ Question1.cpp -o Question1
```

Run the compiled program on Windows:

```bash
.\Question1.exe
```

Repeat the process for the remaining questions by changing the filename.

---

## Application Descriptions

### Question 1: Membership Quotation System

The membership quotation system allows students to select a wellness membership package and membership duration.

**Membership packages:**

| Membership | Monthly Fee |
|---|---:|
| Basic Access | R220 |
| Active Plus | R350 |
| Complete Wellness | R480 |

**Features:**
- Captures student information.
- Calculates membership costs.
- Applies discounts based on membership duration.
- Includes an optional fitness assessment fee.
- Validates membership selections and user input.

### Question 2: Session Booking System

The session booking system allows students to book wellness activities.

**Available sessions:**

| Session | Price per Participant |
|---|---:|
| Yoga Fundamentals | R75 |
| Strength Circuit | R110 |
| Stress Management | R90 |

**Features:**
- Displays available wellness sessions.
- Calculates booking subtotals.
- Applies a 10% discount for bookings of eight or more participants.
- Applies a 15% surcharge for Saturday bookings.
- Calculates the final booking amount and cost per participant.
- Validates session selections and participant numbers.

### Question 3: Daily Check-in System

The daily check-in system records student participation in wellness activities.

**Available activities:**
- Gym Floor
- Group Class
- Wellness Consultation

**Visit categories:**

| Duration | Category |
|---|---|
| 15–44 minutes | Short Visit |
| 45–89 minutes | Standard Visit |
| 90–180 minutes | Extended Visit |

**Features:**
- Allows a maximum of ten check-in attempts.
- Records student numbers and activity selections.
- Validates activity codes and visit durations.
- Tracks valid and invalid check-ins.
- Calculates total and average visit duration.
- Displays a long-session check for visits of 120 minutes or more.

### Question 4: Attendance Analytics System

The attendance analytics system analyses weekly attendance across three wellness programmes and five weekdays.

**Programmes:**
- Yoga
- Strength
- Wellness Workshop

**Features:**
- Uses two-dimensional arrays to store attendance information.
- Uses nested loops to process attendance records.
- Calculates weekly programme totals and daily averages.
- Calculates total attendance for each weekday.
- Identifies the busiest weekday.
- Identifies the programme with the highest weekly attendance.
- Marks attendance values of 40 or more as `HIGH DEMAND`.
- Calculates grand total and overall average attendance.

---

## Input Validation

Input validation is implemented throughout the applications to improve reliability and prevent incorrect selections.

Examples include:

- Checking membership codes and membership durations.
- Checking session codes and participant limits.
- Checking activity codes and visit durations.
- Validating Yes/No responses.
- Limiting daily check-in attempts.

When invalid input is entered, the programs display appropriate error messages.

---

## Testing and Results

Each application was compiled and tested independently.

A total of **16 test cases** were completed across the four applications.

| Application | Test Cases | Result |
|---|---:|---|
| Question 1 – Membership Quotation | 4 | Passed |
| Question 2 – Session Booking | 4 | Passed |
| Question 3 – Daily Check-ins | 4 | Passed |
| Question 4 – Attendance Analytics | 4 | Passed |
| **Total** | **16** | **All Passed** |

The test cases include normal operations, invalid inputs,
