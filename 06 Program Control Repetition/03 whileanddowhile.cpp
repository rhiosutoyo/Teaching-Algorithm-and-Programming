//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>

// the difference between for and do while

int main(){
	// exp1 :  initialization
	// what is the initial value of our variable?
	// int i=1

	// exp2 :  conditional 
	// when the loop should be stop?
	// i<=n
	
	// exp3 :  increment or decrement 
	// how fast the value changes?	
	// i+=3


	// repetition: do while
	// do while check the condition in the back
	// we at least run the statement at least one time
	printf("DO WHILE\n:");
	int j = 11;									// initialization
	do{
		printf("%d ", j);
		j++;									// increment
	}while(j <= 10);							// conditional
		
	puts("\n");
	
	// repetition: while
	// while check the condition in the front
	printf("WHILE\n:");
	j = 11;										// initialization
	while(j <= 10){								// conditional
		printf("%d ", j);
		j++;									// increment		
	}
}


