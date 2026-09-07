#include<stdio.h>

int main(){
	char str[100] = "";			// string

	// Single Scan
	// scanf("%s", str);			// only able to scan a single line
	// printf("%s\n\n", str);

	// scan until line break is found
	// scanf("%[^\n]", str);		
	// printf("%s\n\n", str);
		
	// scan until dollar sign is found
	scanf("%[^$]", str);		
	printf("%s\n\n", str);

	return (0);
}
