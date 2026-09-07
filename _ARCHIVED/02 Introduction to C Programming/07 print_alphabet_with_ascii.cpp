#include<stdio.h>

int main(){
	// print alphabet manually
	printf("A\n");
	printf("B\n");
	printf("C\n\n");

	// print alphabet with looping
	for(int i=0;i<26;i++){
		printf("%c\n",65+i);
		// printf("%c\n",65+1);
		// printf("%c\n",65+2);
	}
	return(0);
}
