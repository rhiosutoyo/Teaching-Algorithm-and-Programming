//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>

int main(){
	int x = 5, y = 10;
	
	// TRUE EXPRESSION
	(x < y);		// TRUE
	(x != y);		// TRUE
	
	// FALSE EXPRESSION	
	(x > y);		// FALSE
	(x == y);		// FALSE

	// just use A or B	(SINGLE EXPRESSION)
	if(x < y) printf("print something_1\n");
	if(x > y) printf("print something_2\n");
	if(x != y) printf("print something_3\n");
	if(x == y) printf("print something_4\n");
	
	// TRY TO USE LOGICAL OPERATOR (MULTIPLE EXPRESSION)
	if( (x<y) && (x!=y) ) printf("print something_5\n");

	// will the print something 6 printed? why?
	if( (x<y) && (x==y) ) printf("print something_6\n");
	// because AND condition need both of expression to be TRUE
	// x < y 	==> TRUE
	// x == y	==> FALSE
	
	// will the print something 6 printed? why?
	if( (x<y) || (x==y) ) printf("print something_7\n");
	// because OR condition only need one expression to be TRUE
	// x < y 	==> TRUE
	// x == y	==> FALSE
	
	
	
}
