#include<stdio.h>

int main(){

	// Space and Justification
	printf ("%03d\n",   1);
	printf ("%03d\n",  12);
	printf ("%03d\n", 123);

	// Space and Justification
	printf ("%s\n", "BINUS UNIVERSITY");
	printf ("%.8s\n", "BINUS UNIVERSITY");
	printf ("%20s\n", "BINUS UNIVERSITY");
	printf ("%-20s\n", "BINUS UNIVERSITY");
	
	// Comma Value
	printf ("%8.2f\n", 3.14159);
	printf ("%-8.3f\n", 3.14159);
	printf ("%8.5f\n", 3.14159);
		
	return (0);
}
