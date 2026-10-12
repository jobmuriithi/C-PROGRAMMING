# OOP 1 (C++) Weekly Assignments

Solutions to the weekly assignments for **Object-Oriented Programming 1 (C++)**.
Each week has its own folder, and each task is a separate `.cpp` file.

## Structure

| Folder | Topic | Programs |
|---|---|---|
| `Week01_CPP_Basics` | Variables, input/output, arithmetic | Sales receipt, driving test result |
| `Week02_Control_Structures` | if-else, nested if, switch | Grading system, admission decision, calculator |
| `Week03_Functions` | Modular programming | Payroll system, water billing |
| `Week04_Loops` | for, while, do-while | Employee bonus, withdrawals, password check |
| `Week05_Arrays` | 1D, 2D and 3D arrays | Hotel management system |
| `Week06_Classes_and_Objects` | Classes and objects | Library books, student fees |
| `Week08_Constructors_and_Destructors` | Constructors, destructors | Bank account, room booking |
| `Week09_Inheritance` | Base and derived classes | School management, vehicle system |
| `Week10_Polymorphism` | Overloading, overriding | Payment system, shape drawing |
| `Week11_Encapsulation` | Private data, public interface | Employee data, student fee security |
| `Week12_Abstraction` | Abstract classes, pure virtual functions | Hospital staff, shape areas |
| `Week13_Files` | Text and binary file I/O | Borrowed books, student results, daily sales |

## Compile and run

Requires a C++ compiler such as `g++` (C++11 or later).

Single program:

```bash
g++ -std=c++17 -Wall Week01_CPP_Basics/task1_sales_receipt.cpp -o sales_receipt
./sales_receipt
```

All programs at once:

```bash
./build_all.sh
./bin/Week01_CPP_Basics/task1_sales_receipt
```

## Notes

- **Week 5**: room occupancy is simulated with `rand()`, so output changes on each run.
- **Week 13**: run these from inside `Week13_Files/` so the data files are found.
  - `create_sample_results.cpp` is a helper that generates a test `results.dat` for Task 2.
  - `sales.txt` is sample data for Task 3.
  - Task 3 is written in C++ (the brief says "C program", but the course is C++).
- The assignment sheet has no Week 7 activity, so there is no Week 7 folder.
