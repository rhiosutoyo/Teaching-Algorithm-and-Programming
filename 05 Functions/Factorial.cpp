#include<stdio.h>
/* Factorial (n) or n! defined as follows:
	n! = 1, for n = 0; 
	n! = n * (n-1)!, for n > 0 
*/

int factorial(int number){
	// Base case: return value(constant) without calling next recursive call
	if(number == 0)		// n = 0
		return 1;

	// Reduction step: sequence of input value converging to the base case
	return number * factorial(number - 1);
}

int main(){
	int x = 5;
	printf("Factorial of %d is %d", x, factorial(x));	
	return (0);
}
