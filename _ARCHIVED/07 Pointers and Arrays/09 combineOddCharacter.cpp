#include<stdio.h>
#include<string.h>

int main(){
	char str1[100] = "BINUS";
	char str2[100] = "UNIVERSITY";	
	
	// COMBINE STR 1 and STR 2
	strcat(str1, str2);
	printf("%s\n", str1);
	printf("%s\n", str2);
		
	// COMBINE ODD CHAR OF str1 and str2 to a new string  -- > "BaNaS uea"
	char str3[100] = "BINUS MEGA STORE";
	char str4[100] = "alam sutera";	
	
	int lenStr3 = strlen(str3);
	int lenStr4 = strlen(str4);
	
	// FIND THE LEN MAX
 	int lenMax = 0;
	if(lenStr3 < lenStr4) lenMax = lenStr4;
	else lenMax = lenStr3;

	int i;
    // print sampai len of lenMax
	for(i=0;i<lenMax;i=i+2){
	    // PRINT ONLY MAX LEN OF STR3
	    if(i<lenStr3)
	        printf("%c", str3[i]);
	    // PRINT ONLY MAX LEN OF STR4
	    if(i<lenStr4)
    	    printf("%c", str4[i]);
	}
	puts("");
}