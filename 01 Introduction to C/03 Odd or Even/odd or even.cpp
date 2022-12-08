#include<stdio.h>

// IMPLEMENTATION OF CHECKING ODD/EVEN NUMBER
int main(){
	printf("START\n");
	
	int X;						// instantiate the integer X

	do{
		scanf("%d", &X);			// ask the input for integer X	
		if(X == -1) break;
		if(X % 2 == 0)				// X modulus 2
			printf("EVEN\n");		// if it's 0
		else
			printf("ODD\n");		// if it's not 0
	}while(1);
	
	printf("END\n");		
	return (0);
}
