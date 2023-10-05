//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>

int main(){
	// variable consists of: name, value, address, data type, size
	int number = 100;
	// name: number
	// value
	printf("NUMBER\n");
	printf("value	: %d\n", number);

	// address (in hexadecimal: base 16) --> octal base-8
	// binary (base 2)			: 0 1									4
	// decimal (base 10)		: 0 1 2 3 4 5 6 7 8 9  					100
	// hexademical (base 16)	: 0 1 2 3 4 5 6 7 8 9 A B C D E F		4 		
	printf("address	: %x\n", &number);

	// data type: int
	// size
	printf("size	: %d\n", sizeof(number));
	
	// Pointer is a variable that store the address of another variable
	int *pnumber = &number;

	printf("\nPOINTER NUMBER\n");
	printf("value	: %x\n", pnumber);
	printf("address	: %x\n", &pnumber);
	printf("size	: %d\n", sizeof(pnumber));

	// this code will change the value of the another variable (i.e. number)
	*pnumber = 5; 						// is this ERROR?
	// *pnumber = 5; --> number = 5;
	
	printf("\nNUMBER\n");
	printf("value	: %d\n", number);
	
	// pointer to pointer
	int **ppnumber = &pnumber;
	printf("value	: %x\n", ppnumber);
	
	int ***pppnumber = &ppnumber;
	int ****ppppnumber = &pppnumber;
}
