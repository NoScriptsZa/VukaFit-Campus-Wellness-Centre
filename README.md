# VukaFit Campus Wellness Centre

**C++ Programming Assignment**

## Student Information

| Detail | Information |
|---|---|
| Student Name | Aneeq Harris |
| Student Number | EDUV12967292 |
| Programming Language | C++ |
| Development Environment | OnlineGDB / Visual Studio Code |
| GitHub Repository | [VukaFit Campus Wellness Centre](https://github.com/NoScriptsZa/VukaFit-Campus-Wellness-Centre) |

---

## 1. Project Overview

The VukaFit Campus Wellness Centre project consists of four independent C++ console applications developed to manage different aspects of a campus wellness centre.

The programs demonstrate procedural programming concepts, including variables, input validation, conditional statements, loops, functions, arrays and calculations.

**GitHub Repository:** [View VukaFit Campus Wellness Centre](https://github.com/NoScriptsZa/VukaFit-Campus-Wellness-Centre)

---

## 2. Project Structure

| File | Description |
|---|---|
| `Question1.cpp` | Membership quotation system |
| `Question2.cpp` | Session booking system |
| `Question3.cpp` | Daily check-in system |
| `Question4.cpp` | Attendance analytics system |
| `README.md` | Project documentation and user guide |
| `screenshots/` | Screenshots showing program execution and testing |

---

## 3. System Requirements

The programs require:

- A computer running Windows, macOS or Linux.
- A C++ compiler.
- An internet connection when using OnlineGDB.
- A code editor such as Visual Studio Code or an online compiler such as OnlineGDB.

---

## 4. How to Compile and Run

Each question is an independent C++ program and must be compiled and executed separately.

### Using OnlineGDB

1. Visit [OnlineGDB](https://www.onlinegdb.com/online_c++_compiler).
2. Select C++ as the programming language.
3. Open the required `.cpp` file from the repository.
4. Copy and paste the code into the editor.
5. Click the Run button.
6. Enter the requested information in the console.

### Using Visual Studio Code

Open the project folder in Visual Studio Code and use a C++ compiler.

Example compilation command:

```bash
g++ Question1.cpp -o Question1
```

Run the compiled program on Windows using:

```bash
.\Question1.exe
```

Replace `Question1.cpp` with the required source file when compiling another question.

---

## 5. Program Descriptions

### Question 1 – Membership Quotation

The membership quotation program calculates the cost of a wellness centre membership.

It allows users to:
- Enter their student number and full name.
- Select one of three membership options.
- Choose a membership duration between one and six months.
- Add an optional fitness assessment.
- Receive discounts based on the membership duration.

**Membership options:**

| Membership | Monthly Fee |
|---|---:|
| Basic Access | R220 |
| Active Plus | R350 |
| Complete Wellness | R480 |

**Discount structure:**

- 1–2 months: No discount.
- 3–5 months: 7% discount.
- 6 months: 12% discount.

The program calculates the subtotal, discount, assessment fee and final membership cost.

### Question 2 – Session Booking

The session booking program allows students to book wellness activities.

**Available sessions:**

| Session | Price per Participant |
|---|---:|
| Yoga Fundamentals | R75 |
| Strength Circuit | R110 |
| Stress Management | R90 |

The program allows between 1 and 12 participants.

**Discount and surcharge rules:**

- Bookings of 8 or more participants receive a 10% group discount.
- Saturday bookings receive a 15% surcharge after the group discount.
- The final total and cost per participant are displayed.

The program uses separate functions to calculate costs, validate inputs and display the booking summary.

### Question 3 – Daily Check-ins

The daily check-in program records student visits to the wellness centre.

**Available activities:**

1. Gym Floor.
2. Group Class.
3. Wellness Consultation.

The program:
- Allows a maximum of 10 check-in attempts.
- Records student numbers, activity codes and visit durations.
- Validates activity codes and visit durations.
- Counts valid and invalid check-ins.
- Calculates total valid minutes and average visit duration.

**Visit duration categories:**

| Duration | Category |
|---|---|
| 15–44 minutes | SHORT VISIT |
| 45–89 minutes | STANDARD VISIT |
| 90–180 minutes | EXTENDED VISIT |

Visits lasting 120 minutes or longer also display a LONG SESSION CHECK message.

### Question 4 – Attendance Analytics

The attendance analytics program analyses attendance across three wellness programmes over five weekdays.

It uses two-dimensional arrays and nested loops to process attendance information.

The program:
- Displays attendance for each programme and weekday.
- Calculates weekly attendance totals.
- Calculates daily attendance averages.
- Identifies the busiest weekday.
- Identifies the programme with the highest weekly attendance.
- Marks attendance values of 40 or more as HIGH DEMAND.
- Calculates the grand total and overall average attendance.

The calculations are generated from the attendance array, allowing the results to change when the attendance data is modified.

---

## 6. Input Validation

Input validation is included throughout the programs to reduce incorrect data entry.

Examples include:

- Invalid membership selections are rejected.
- Membership durations outside the permitted range are rejected.
- Invalid session codes are rejected.
- Participant numbers must be between 1 and 12.
- Check-in durations must be between 15 and 180 minutes.
- Invalid activity codes are rejected.
- Invalid check-ins are not included in valid attendance calculations.

---

## 7. Testing and Results

All four programs were compiled and tested using different input scenarios.

A total of 16 test cases were completed successfully.

| Program | Tests Completed | Result |
|---|---:|---|
| Question 1 – Membership Quotation | 4 | Passed |
| Question 2 – Session Booking | 4 | Passed |
| Question 3 – Daily Check-ins | 4 | Passed |
| Question 4 – Attendance Analytics | 4 | Passed |
| **Total** | **16** | **All Passed** |

The tests included normal inputs, boundary values, invalid inputs and changed attendance data to confirm that the programs produced the expected results.

---

## 8. Screenshots

The following screenshots provide evidence of the execution and testing of all four C++ programs.

### Question 1 – Membership Quotation

1. [Test 1 – Standard Membership Quotation](screenshots/Q1-Test1.png)
2. [Test 2 – Membership Without Discount](screenshots/Q1-Test2.png)
3. [Test 3 – Invalid Membership Code](screenshots/Q1-Test3.png)
4. [Test 4 – Invalid Membership Duration](screenshots/Q1-Test4.png)

### Question 2 – Session Booking

5. [Test 1 – Group Booking with Saturday Surcharge](screenshots/Q2-Test1.png)
6. [Test 2 – Small Weekday Booking](screenshots/Q2-Test2.png)
7. [Test 3 – Invalid Session Code](screenshots/Q2-Test3.png)
8. [Test 4 – Invalid Participant Number](screenshots/Q2-Test4.png)

### Question 3 – Daily Check-ins

9. [Test 1 – Multiple Valid Check-ins and Visit Categories](screenshots/Q3-Test1.png)
10. [Test 2 – Minimum Visit Duration](screenshots/Q3-Test2.png)
11. [Test 3 – Invalid Visit Duration](screenshots/Q3-Test3.png)
12. [Test 4 – Extended Visit and Long Session Check](screenshots/Q3-Test1.png)

### Question 4 – Attendance Analytics

13. [Test 1 – Original Attendance Data](screenshots/Q4-Test1.png)
14. [Test 2 – Boundary Testing at 40](screenshots/Q4-Test2.png)
15. [Test 3 – Changed Attendance Data](screenshots/Q4-Test3.png)
16. [Test 4 – Restored Original Attendance Data](screenshots/Q4-Test4.png)

---

## 9. Conclusion

The VukaFit Campus Wellness Centre project demonstrates the use of fundamental C++ programming concepts to develop four practical console applications.

Each program was compiled and tested successfully. The project demonstrates input validation, calculations, functions, loops, arrays and basic data analysis.

The completed programs provide a simple solution for managing membership quotations, session bookings, daily check-ins and attendance analytics.

---

**GitHub Repository:** [https://github.com/NoScriptsZa/VukaFit-Campus-Wellness-Centre](https://github.com/NoScriptsZa/VukaFit-Campus-Wellness-Centre)
