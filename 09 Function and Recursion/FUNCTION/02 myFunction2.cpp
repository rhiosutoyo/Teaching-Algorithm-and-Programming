#include<stdio.h>

// create a function which add two number of floating values
// then return that float value to the caller
// for example: 3.4 + 5.5 = 8.9
// then, return the 8.9 to the caller

float additionTwoValues(float f1, float f2){
	float total = f1 + f2;
	return total;
}

int main(){
	// without function
	float a = 3.4;
	float b = 5.5;
	float total = 0;
	total = a + b;
	printf("%.2f\n", total);
	
	////////////////////////
	
	// with function
	// we send two parameter of floating numbers to the function
	// the function will return the addition of those number
	// then we save it into the total variable
	total = additionTwoValues(3.1, 5.5);
	printf("%.2f\n", total);

	return (0);
}


