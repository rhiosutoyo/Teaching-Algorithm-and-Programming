#include<stdio.h>
#include<math.h>

int main(){
	double db = 0;
	long long int result = 0;

	scanf("%lf", &db);
	result = pow(2,db) - 1;

	printf("%lld\n", result);
	
	return (0);
}
