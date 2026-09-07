#include <stdio.h>
#include <math.h>   /* For standard math functions: sqrt(), pow() */
#include <ctype.h>  /* For character manipulation: toupper() */

/* Constant defined using the preprocessor directive */
#define APP_VERSION "2.0"

int main(void) {
    /* ==========================================================
     * 1. CONSTANTS & VARIABLES
     * ========================================================== */
    printf("--- 1. CONSTANTS & VARIABLES ---\n");
    
    /* 'const' ensures the value cannot be reassigned later in the program */
    const double PI = 3.1415926535;
    
    /* Variable declaration and initialization */
    int studentCount = 35;
    char gradeLetter = 'A';
    
    printf("Application Version : %s\n", APP_VERSION);
    printf("Constant PI Value   : %.5f\n", PI);
    printf("Enrolled Students   : %d\n", studentCount);
    printf("Target Grade        : %c\n\n", gradeLetter);

    /* ==========================================================
     * 2. BASIC DATA TYPES & LITERAL SUFFIXES
     * ========================================================== */
    printf("--- 2. DATA TYPES & SUFFIXES ---\n");
    
    /*
     * Literal suffixes explicitly inform the compiler of the literal's type:
     * - 'f' or 'F' : float literal (default decimal literal is double)
     * - 'u' or 'U' : unsigned integer
     * - 'l' or 'L' : long integer
     */
    float temperature = 36.6f;
    double preciseDistance = 149597870.78975;
    unsigned int positiveScore = 4500U;
    long largeNumber = 9876543210L;

    printf("Float (f suffix)    : %.1f\n", temperature);
    printf("Double (standard)   : %.2f\n", preciseDistance);
    printf("Unsigned Int (U)    : %u\n", positiveScore);
    printf("Long Int (L)        : %ld\n\n", largeNumber);

    /* ==========================================================
     * 3. THE sizeof OPERATOR
     * ========================================================== */
    printf("--- 3. SIZEOF OPERATOR ---\n");
    
    /*
     * 'sizeof' yields the size in bytes of a type or variable.
     * The return type is size_t; the correct format specifier is '%zu'.
     */
    printf("Memory size of char   : %zu byte(s)\n", sizeof(char));
    printf("Memory size of int    : %zu byte(s)\n", sizeof(int));
    printf("Memory size of float  : %zu byte(s)\n", sizeof(float));
    printf("Memory size of double : %zu byte(s)\n", sizeof(double));
    printf("Memory size of variable 'temperature': %zu byte(s)\n\n", sizeof(temperature));

    /* ==========================================================
     * 4. TYPE CASTING (IMPLICIT VS. EXPLICIT)
     * ========================================================== */
    printf("--- 4. TYPE CASTING ---\n");
    
    int totalMarks = 175;
    int totalSubjects = 2;
    
    /*
     * Pitfall: Integer division truncates the decimal part.
     * 175 / 2 yields 87 instead of 87.5.
     */
    double truncatedAverage = totalMarks / totalSubjects;
    
    /*
     * Explicit Casting: (double) converts 'totalMarks' before division,
     * promoting the entire expression to floating-point arithmetic.
     */
    double correctAverage = (double)totalMarks / totalSubjects;

    printf("Integer Division (Truncated) : %.2f\n", truncatedAverage);
    printf("Explicit Cast Division       : %.2f\n\n", correctAverage);

    /* ==========================================================
     * 5. STANDARD LIBRARY FUNCTIONS
     * ========================================================== */
    printf("--- 5. STANDARD FUNCTIONS ---\n");
    
    double base = 9.0;
    double rootResult = sqrt(base);      /* From <math.h> */
    double powerResult = pow(base, 2.0); /* From <math.h> */
    
    char rawChar = 'b';
    char upperChar = toupper(rawChar);   /* From <ctype.h> */

    printf("Square root of %.0f : %.2f\n", base, rootResult);
    printf("%.0f raised to 2   : %.2f\n", base, powerResult);
    printf("Character uppercase conversion: '%c' -> '%c'\n\n", rawChar, upperChar);

    /* ==========================================================
     * 6. INPUT OPERATIONS (scanf) & FORMAT SPECIFIERS
     * ========================================================== */
    printf("--- 6. INPUT OPERATIONS ---\n");
    
    int userAge;
    char userSection;

    printf("Enter your age (integer): ");
    /*
     * scanf requires memory addresses (using '&' for primitive types)
     * to store the scanned values directly.
     */
    scanf("%d", &userAge);

    /*
     * Pitfall with '%c':
     * Pressing ENTER leaves a newline character ('\n') in the input buffer.
     * A leading space before " %c" tells scanf to discard any leading whitespace/newlines.
     */
    printf("Enter your classroom section (single character, e.g., A, B, C): ");
    scanf(" %c", &userSection);

    printf("\nCaptured Details:\n");
    printf("- Age     : %d\n", userAge);
    printf("- Section : %c\n", userSection);

    return 0;
}