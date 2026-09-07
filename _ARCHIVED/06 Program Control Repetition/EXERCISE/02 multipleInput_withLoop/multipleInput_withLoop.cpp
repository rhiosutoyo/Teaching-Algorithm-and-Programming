#include<stdio.h>

int main(){
	int i = 0, j = 0;			// for looping variables
	int	T = 0;					// variable for test cases
	int N = 0;					// variable for the input number
	
	// the number of test cases
	scanf("%d", &T);
	for(i=1 ; i<=T ; i++){
		// Each test case will contain an integer N, the starting number
		scanf("%d", &N);
		// print from 1 to N (without space in the end)
		printf("Case #%d: ", i);
		for(int i=1 ; i<=N ; i++){
			// LOOP WITHOUT SPACE			
			if(i==1) printf("%d", i);
			else printf(" %d", i);
		}
		puts("");			// to print enter (\n)
	}	
}
