//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################


#include<stdio.h>
int main(){
	// how to access array
	int index = 2000;
	int arrN[index] = {5,4,3,2,1};

	index = 3000;
	arrN[index];

	// print array
	for(int i=0 ; i<index ; i++)
		printf("%d ", arrN[i]);

	puts("\n");
	arrN[3] = 88; 	// change the fourth element
	arrN[1] = 99;	// change the second element
	
	// we have 100 variable with the same data type --> character
	char name[101];	// name --> &name[0]
	// 1st address : 20 (x)
	// 2nd address : 21
	// 3rd address : 22
	// 10th address: x + index
//	printf(name[10])
	
//	&name[0] 
	
	scanf("%s", &name[0]);
	printf("%s\n", &name[0]);
		
	// print array
	for(int i=0 ; i<index ; i++)
		printf("%d ", arrN[i]);
}
