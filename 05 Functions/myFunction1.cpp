#include<stdio.h>

void myCoolFunction1(int someValue, char ch = 'Y'){
	printf("%d\n", someValue);
	printf("%c\n", ch);
}

int main(){
	// without function
	int n = 10;
	printf("%d\n", n);
	
	// with function
	myCoolFunction1(99);
			
	return (0);
}
