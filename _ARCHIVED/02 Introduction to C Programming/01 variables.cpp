/*

LEARNING OBJECTIVE
•	Identify and use different data types in C (int, float, double, char, long long, short, unsigned).
•	Explain the difference between signed and unsigned variables.
•	Recognize and understand integer overflow when values exceed their limits.
•	Display numbers in both normal decimal and scientific notation.
•	Practice working with large numbers using long long and unsigned long long.

*/

#include<stdio.h>

int main(){
	// Declaring and Printing Integers
	int num_students = 18;
	int num_lecturer = 1;
	printf("%d %d\n\n", num_students, num_lecturer);
	
	// Floating-Point Numbers
	float f = 45000;
	double d = 5.32e-5;
	printf("%f can be written %e\n", f, f);
	printf("%f can be written %e\n\n", d, d);
	
	// Integer Overflow Example
	int x 		= 2147483647;
	int y 		= 3147483647;	// overflows and prints a wrong (negative or weird) value
	long long z = 3147483647;
	printf("%d\n%d\n%lld\n\n", x, y, z);
	
	// Character, Unsigned, and Short Integers
	unsigned char chr = 'X';
	unsigned int N = 4294967295;
	short int n = -32768;
	printf("%c\n", chr);
	printf("%u\n", N);
	printf("%d\n\n", n);

	// Very Large Integers
	long long int longInt = 9223372036854775807;
	unsigned long long int superLongInt = 18446744073709551615;
	printf("%lld\n", longInt);
	printf("%llu\n", superLongInt);
	
	return(0);
}
