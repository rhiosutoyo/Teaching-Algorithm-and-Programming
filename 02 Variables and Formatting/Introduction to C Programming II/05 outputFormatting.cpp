#include<stdio.h>

int main(){
	int n = 0;
	char c = 0;
	scanf("%d %c", &n, &c);

	printf("%-20s: %d %d\n", "Decimal", n, c);			// the decimal value of n
	printf("%-20s: %o %o\n", "Octagonal", n, c);		// the octagonal value of n
	printf("%-20s: %x %x\n", "Hexadecimal", n, c);		// the hexadecimal value of n
	printf("%-20s: %c %c\n", "ASCII", n, c);			// the ascii character of n
	printf("%-20s: %d %d\n", "Address", &n, &c);		// the address value of n	
	return (0);
}
