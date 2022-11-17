#include<stdio.h>

int main(){
	// C is case sensitive, so n and N is considered as different variable
	int n = 8;
	int N = 11;

	printf("%d\n", n);		// decimal basis 10
	printf("%x\n", n); 		// hexagonal basis 16
	printf("%o\n", n); 		// octal basis 8
	
	printf("%d\n", N);
	printf("%x\n", N);
	printf("%o\n\n", N);
	
	return(0);
}
