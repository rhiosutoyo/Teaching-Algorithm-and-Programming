##############################################
## 	 COMP6047001 - Algorithm and Programming			
## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
## 	 Bina Nusantara University			
##############################################

#include<stdio.h>

int main(){
	int num_students = 18;
	int num_lecturer = 1;
	printf("%d %d\n", num_students, num_lecturer);
	
	float f = 45000;
	double d = 5.32e-5;
	printf("%f can be written %e\n", f, f);
	printf("%f can be written %e\n", d, d);
	
	int x 		= 2147483647;
	int y 		= 3147483647;
	long long z = 3147483647;
	printf("%d %d %lld\n", x, y, z);
	
	// TRY TO PRINT THESE VARIABLE
	unsigned char chr = 'X';
	unsigned int N = 4294967295;
	short int n = -32768;

	{
		printf("%c\n", chr);
		printf("%u\n", N);
		printf("%d\n", n);
	}

	long long int longInt = 9223372036854775807;
	unsigned long long int superLongInt = 18446744073709551615;

	{
		printf("%lld\n", longInt);
		printf("%llu\n", superLongInt);
	}
	
	return(0);
}
