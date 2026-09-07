#include<stdio.h>

int main(){
	int i = 0, j = 0;			// for looping variables
	int T = 0;					// variable for test cases
	int N = 0;					// variable for the input number
	char str[500001];			// check constraints for array size reference
		
	int max_length_of_0 = 0;	// the max length of 0 character
	int max_length_of_1 = 0;	// the max length of 1 character
	int temp_length = 0;		// the temporary max length of consecutive character
	
	// the number of test cases
	scanf("%d", &T);
	for(i=1 ; i<=T ; i++){
		// reset the max length for each test case
		max_length_of_0 = 0;
		max_length_of_1 = 0;
		
		// For each test case, first line will be an integer N
		scanf("%d", &N); getchar();
		//In the next line, there will be string S
		for(j=0 ; j<N ; j++){
			scanf("%c", &str[j]);
		}
		
		// reset the temp length for each test case
		temp_length = 0;
		// check each character in the variable of str
		for(j=0 ; j<N ; j++){
			if(temp_length == 0){								// it's not counting yet
				temp_length++;									// start counting the length
			}
			else{
				// if the next char is consecutive --> 00 or 11
				if(str[j] == str[j-1]){
					// if it's not the last character of the string str
					if(j != N-1){
						temp_length++;								// counting ++
					}
					else{
						temp_length++;								// counting ++
						// if it's '0'
						if(str[j-1] == '0') {
							// set it to the maximum number
							if(temp_length > max_length_of_0)
								max_length_of_0 = temp_length;						
						}
						// if it's '1'
						else{
							// set it to the maximum number
							if(temp_length > max_length_of_1)
								max_length_of_1 = temp_length;
						}						
					}
				}
				// if the next char is not consecutive --> 01 or 10
				else{
					// if it's '0'
					if(str[j-1] == '0') {
						// set it to the maximum number
						if(temp_length > max_length_of_0)
							max_length_of_0 = temp_length;						
					}
					// if it's '1'
					else{
						// set it to the maximum number
						if(temp_length > max_length_of_1)
							max_length_of_1 = temp_length;
					}
					temp_length = 1;
				}
			}
		}
		
		// check the maximum number, is it '0' or '1'? print the maximum
		if(max_length_of_0 > max_length_of_1){
			printf("Case #%d: 0 %d \n", i, max_length_of_0);
		}
		else{
			printf("Case #%d: 1 %d \n", i, max_length_of_1);
		}
	}
	return (0);
}
