//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>

int main(){
	// with non-array
	int n1, n2, n3, n4, n5;
	int n6, n7, n8, n9, n10;

	n1 = 5;
	n2 = 4;
	n3 = 3;
	n4 = 2;
	n5 = 1;
	int total = n1+n2+n3+n4+n5;
	printf("%d\n", total);     // 15
	
	// with array
	int index = 10;

	int arrN[index] = {5,4,3,2,1};
	arrN[0] = 5;
	arrN[1] = 4;
	arrN[2] = 3;
	arrN[3] = 2;
	arrN[4] = 1;
	//total = arrN[0]+arrN[1]+arrN[2]+arrN[3]+arrN[4];
	total = 0;	// reset total

	for(int i=0 ; i<index ; i++)
		total += arrN[i];

	printf("%d\n", total);		// 15
	
	
	
	
	// the benefit of array
	total = 0;
	for(int i=0 ; i<5 ; i++) {			// i = 0, 1, 2, 3, 4 
		arrN[i] = 10;
		total = total + arrN[i];
		
		if(total == 40) break;
	}
	printf("%d\n", total);		// 50	
	
	// initializtion
	long long int arrayN[100] = {0};
	
//	for(int i=0 ; i<100 ; i++)
//		arrayN[i] = 0;

	long long ntotal = 0;
	for(int i=0 ; i<100 ; i++){
		printf("%lld\n", arrayN[i]);
		ntotal = ntotal + arrayN[i];
	}
	printf("TOTAL  = %lld\n", ntotal);		// ?????
}
