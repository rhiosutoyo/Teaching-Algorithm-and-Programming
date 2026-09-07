//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>

int main(){
	// print manually
	printf("print 1\n");
	printf("print 2\n");
	printf("print 3\n");
	printf("print 4\n");
	printf("print 5\n");
	
	// repeat the print statement with loop (for)
	int n = 0;
	scanf("%d", &n);	// how many repetition
	

	// exp1 :  initialization
	// what is the initial value of our variable?
	// int i=1

	// exp2 :  conditional 
	// when the loop should be stop?
	// i<=n
	
	// exp3 :  increment or decrement 
	// how fast the value changes?	
	// i+=3
	
//	for(int i=1 ; i<=n ; i++){			// increment by 1
//	for(int i=1 ; i<=n ; i+=3){			// increment by 3

	
	// the program stop until the countofmodulus103 is 8
	int countModulusOf103 = 0;
	
	for(int i=1 ;      ; i+=3){			// loooping FOREVER
		// 103, 206, 309, 412
		if(i % 103 == 0){
			printf("print %d\n", i);
			// the second increment
			countModulusOf103++;
		}		
		// the program stop until the countofmodulus103 is 8
		if(countModulusOf103 == 8) break;
	}
	
//	for(int i=1 ; i<=n ; i++){
//		// LOOP WITHOUT SPACE
//		if(i==1) printf("%d", i);
//		else printf(" %d", i);
//	}
}
