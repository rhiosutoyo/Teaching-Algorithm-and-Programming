#include<stdio.h>

int main(){
	int i = 0, j = 0;	// for looping variables
	int T = 0;			// variable for test cases
	int N = 0;			// variable for the input number
	
	// the number of test cases
	scanf("%d", &T);
	for(i=1 ; i<=T ; i++){
		// Each test case will contain an integer N, the starting number
		scanf("%d", &N);
		// Print “Case #X:” on the first line of each test case. 
		// Then print the countdown each on their own line.
		printf("Case #%d:\n", i);
		for(j=N ; j>=1 ; j--){
			// The special numbers are 5, 10, 30, 60, and the starting number
			if(j == 5 || j == 10 || j == 30 || j == 60 || j == N){
				printf("%d SECONDS TILL NEW YEAR!!\n", j);
			}
			else{
				printf("%d\n", j);
			}			
		}
	}
}
