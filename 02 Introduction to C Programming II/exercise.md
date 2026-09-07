# Lab Exercises: Introduction to C Programming II

This lab set reinforces fundamental C programming concepts, including primitive data types, literal suffixes, memory evaluation with `sizeof`, type casting mechanics, formatted I/O (`printf`/`scanf`), and standard library functions (`<math.h>`, `<ctype.h>`).

---

## Exercise 1: Circle Metric Calculator

### Objectives
* Use constants (`#define` or `const`).
* Perform standard math operations with `<math.h>` (`pow()`).
* Format decimal numbers using `printf` specifiers.

### Problem Description
Write a C program that reads the radius of a circle from the user as a floating-point value (`double`). The program must calculate and display both the circumference and area of the circle rounded to exactly **3 decimal places**.

### Formula Reference
* **Circumference:** $C = 2 \times \pi \times r$
* **Area:** $A = \pi \times r^2$
* Use $\pi = 3.141592653589793$

### Requirements
* Declare $\pi$ as an immutable constant.
* Compile with `-lm` if building on Linux or macOS (to link the math library).
* Use appropriate format specifiers for input and output (`%lf` for reading double, `%.3f` for output display).

### Sample Execution
```text
Enter circle radius: 4.5
------------------------------
Circumference : 28.274
Area          : 63.617
```

### Conceptual Challenge Question
> **Question:** What happens at runtime if the radius variable is declared as `int`, but the user inputs `4.5` into `scanf("%d", &radius)`? What gets stored in the variable, what happens to the remaining input in the buffer, and how does this affect downstream calculations?

---

## Exercise 2: Weighted Exam Score & Type Promotion

### Objectives
* Prevent integer truncation in arithmetic expressions.
* Contrast implicit type conversion with explicit casting.
* Read multiple whitespace-separated values in a single `scanf` invocation.

### Problem Description
A course calculates the final course grade using three weighted components:
* **Quiz:** 20%
* **Midterm:** 35%
* **Final Exam:** 45%

Write a program that takes three integer scores (`0` to `100`) from standard input and computes:
1. The **weighted overall grade**.
2. The **unweighted arithmetic average** ($\frac{\text{Quiz} + \text{Midterm} + \text{Final}}{3}$) preserving decimal precision.

### Requirements
* The input values must be stored in variables of type `int`.
* Both output values must be printed to **2 decimal places**.
* Explicit type casting must be used to ensure the unweighted average does not truncate fractional components.

### Sample Execution
```text
Enter quiz, midterm, and final scores: 78 85 92
---------------------------------------------
Weighted Grade     : 86.75
Unweighted Average : 85.00
```

### Conceptual Challenge Question
> **Question:** Why does the expression `(double)(quiz + midterm + final / 3)` yield an incorrect result, whereas `(double)(quiz + midterm + final) / 3` produces the expected average? Detail the role of operator precedence and data type promotion rules in your explanation.

---

## Exercise 3: User Profile & Memory Footprint Analyzer

### Objectives
* Inspect type sizes in memory across system architectures using `sizeof`.
* Use the portable `%zu` format specifier for `size_t`.
* Safely consume whitespace and trailing newlines using `scanf(" %c", &var)`.
* Transform character case using standard utility functions from `<ctype.h>`.

### Problem Description
Write a program that collects basic student information:
* Student ID (`unsigned int`)
* Expected graduation year (`short`)
* First initial (`char`)
* Last initial (`char`)

The program must convert both initials to uppercase, format and print an identity summary, and print a memory footprint breakdown showing how many bytes each variable occupies in memory.

### Requirements
* Use `toupper()` from `<ctype.h>` on the initial inputs.
* Use `sizeof` to determine variable sizes dynamically.
* Ensure all character input handles preceding newline/whitespace tokens safely.

### Sample Execution
```text
Enter student ID: 260199
Enter graduation year: 2028
Enter first initial: r
Enter last initial: s

========================================
            STUDENT PROFILE             
========================================
Initials        : R. S.
Student ID      : 260199
Graduation Year : 2028

========================================
            MEMORY FOOTPRINT            
========================================
Variable 'firstInitial'  (char)         : 1 byte(s)
Variable 'lastInitial'   (char)         : 1 byte(s)
Variable 'gradYear'      (short)        : 2 byte(s)
Variable 'studentId'     (unsigned int) : 4 byte(s)
```

### Conceptual Challenge Question
> **Question:** If the leading space in `scanf(" %c", &lastInitial)` is omitted, why does the program appear to skip the prompt or read unexpected characters? Explain the behavior of the standard input stream (`stdin`) buffer when numeric scanning is followed by character scanning.

---

## Submission & Grading Guidelines
* Submit source code files named `exercise1.c`, `exercise2.c`, and `exercise3.c`.
* Ensure each file compiles without warnings under the `-Wall -Wextra -pedantic -std=c11` flags.
* Document answers to each challenge question inside multi-line comments at the bottom of each respective source file.
