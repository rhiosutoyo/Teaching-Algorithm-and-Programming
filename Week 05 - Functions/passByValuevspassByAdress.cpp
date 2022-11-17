// whats the difference when we pass a pointer variable into a function
// passing by address

#include<stdio.h>

void passByValue(int n){
	n = n + 5;
	printf("n value in function %d\n", n);
}

void passByAddress(int *n){
	*n = *n + 5;
	printf("n value in function %d\n", *n);
}

int main(){
	// passing by value
	int n = 30;
	printf("n value in main is %d\n", n);
	passByValue(n);
	printf("n value in main %d\n", n);
	passByAddress(&n);
	printf("n value in main %d\n", n);
	return (0);
}
