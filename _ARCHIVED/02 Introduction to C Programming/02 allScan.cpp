#include<stdio.h>

int main(){
	char str[100] = "";			// string
	int n = 0;					// integer
	float f = 0;				// floating number
	double db = 0;				// floating number
	char c = 'x';				// character
	
	// Single Scan
	scanf("%s", str);			// only able to scan a single line
//	scanf("%[^\n]", str);		// scan until line break is found
	printf("%s\n\n", str);

	// Multiple Scan
	scanf("%d %f %lf %c", &n, &f, &db, &c);	
	printf("%d %f %lf %c", n, f, db, c);
		
	return (0);
}
