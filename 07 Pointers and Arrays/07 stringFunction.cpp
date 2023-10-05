//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>
#include<string.h>

int main(){
	char str1[100] = "BINUS";
	char str2[100] = "UNIVERSITY";	
	
	// Return a value of string length; excluded null char
	printf("%d\n", strlen(str1));
	printf("%d\n", strlen(str2));
	
	// Copy s2 to s1
	// str1 = "BINA NUSANTARA"; 	// str1 --> &str1[0]
	strcpy(str1, "BINA NUSANTARA");	
	printf("%s %s\n", str1, str2);

	// Copy first n characters of s2 to s1
	strncpy(str1, "TEST", 2);	
	printf("%s %s\n", str1, str2);
	strncpy(str1, "TEST", 3);	
	printf("%s %s\n", str1, str2);

	// we can use the strcmp to check name alphabetically
	// L < V because ascii

	char str3[100] = "Lucas";
	char str4[100] = "Eduardo";
//	char str4[100] = "Lucas L";
	//char str4[100] = "Vincent";
	
	if(strcmp(str3, str4) < 0)
		printf("%s < %s\n", str3, str4);
	else if(strcmp(str3, str4) > 0)
		printf("%s > %s\n", str3, str4);
	else
		printf("%s = %s\n", str3, str4);
}

/*
strcat(s1,s2)
 		Adding string s2 to the end of string s1
strncat(s1,s2,n) 
		Adding n characters of string s2 to the end of string s1
strcmp(s1,s2)
		Comparing the value of string s1 and s2, if similar returning 0
etc.
*/
