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
	
	// repetition: for
	int i, f;
	for(i=1, f=5 ; i<=10, f<=100 ; i++, f*=5){		
		printf("%d %d\n", i, f);
	}

	puts("\n");

	// repetition: do while
	int j = 1;									// initialization
	int x = 5;
	do{
		printf("%d %d\n", j, x);
		j++;									// increment
		x*=5;									// increment
	}while(j <= 10 && x <= 100);				// conditional
	
	// 1st: j = 1, x = 5
	// 2nd: j = 2, x = 25
	// 3rd: j = 3, x = 125
}


