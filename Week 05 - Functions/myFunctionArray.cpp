#include<stdio.h>

// strlen function
// return the length of the string
int myStrLenFunction(char str[]){
	int len = 0;
	while(str[len] != '\0'){
		len = len + 1;		
	}
	return len;
}

int main(){
	// without function
	char name[201] = "BINUS !#$";
	printf("%s\n",name);

	// we pass the 1D array 
	printf("length of the string: %d\n", myStrLenFunction(&name[0]));
	return (0);
}

