#include<stdio.h>

int main(){
	char str[100] = "";			// string
	int n = 0;					// integer
	float f = 0;				// floating number
	double db = 0;				// floating number
	char c = 'x';				// character
	
	scanf("%s", &str);	
	scanf("%d %f %lf %c", &n, &f, &db, &c);
	
	printf("%s %d %f %lf %c", str, n, f, db, c);
		
	return (0);
}	
