//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>

int main(){
	int n = 0;
	
	printf("Please enter an integer number: ");
	scanf("%d", &n);

	if(n % 2 == 0) printf("> %d is an even number!\n", n);
	else printf("> %d is an odd number!\n", n);
	
	return(0);
}
