#include<stdio.h>

int main(){
	char name[200] = "";
	char nim[10] = "";
	int age = 0;
	scanf("%[^\n]", &name);
	scanf("%s %d", &nim, &age);
	
	printf("Name: %s\n", name);
	printf("NIS: %s\nAge: %d\n", nim, age);
	
	return (0);
}
