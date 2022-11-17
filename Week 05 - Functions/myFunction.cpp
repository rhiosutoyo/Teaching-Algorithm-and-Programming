#include<stdio.h>
#include<math.h>
#include<string.h>

// 01
void myFunction(int x){
	printf("%d\n", x);			// 5
}

// 02
int mySumFunction(int x, int y){		// x = 5, y = 10
	int z = x + y;
	return z;
}

// 03
// a = 2.0000000, b = 3.0000000
double myPowerFunction(double a, double b){
	int i;
	int result = 1;

	// a ^ b
	// a * a * a
	for(i=0 ; i<b ; ++i){	// loop three times
		result = result * a;
		// 1 * 2 1st 
		// 2 * 2 2nd
		// 4 * 2 3rd

		if(i == b-2) break;
	}
	return result;
}

// 04
void myFunctionPrintArray(int arrN[], int arraySize){
	int i = 0;
	do{
		if(i == 0)
			printf("%d", arrN[i]);
		else
			// to avoid trailing space
			printf(" %d", arrN[i]);
		i++;
	}while(i<arraySize);
}

// 05
int myFunctionCheckAllAlphabet(char str[]){
	int len = strlen(str);
		
	for(int i=0 ; i<len ; i++){		
		// convert char to lowercase
		if(str[i] > 'A' && str[i] < 'Z')
			str[i] = str[i] - 'A' + 'a';

		// check all alphabet
		if(str[i] < 'a'){
			if(str[i] != ' '){
				printf("reason: '%c' < %d\n", str[i], 'a');
				return 0;	
			}
		}
		else if(str[i] > 'z'){
			if(str[i] != ' '){
				printf("reason: '%c' > %d\n", str[i], 'z');
				return 0;	
			}
		}
	}
	return 1;
}

// 06
void myFunctionSwap(int, int);

// 07
void myFunctionSwapUsingReference(int *q, int *w){
	int temp;
	temp = *q;
	*q = *w;
	*w = temp;
//	printf("in the swap	: q = %d, w = %d\n", q, w);	
	printf("in the swap	: q = %d, w = %d\n", *q, *w);	
}

int main(){
	// 01
	int x = 5;
//	printf("%d\n", x);
	// input --> process --> output (the return value of the function)
	myFunction(x);
	
//	// 02
	int y = 10;
	mySumFunction(x, y); // 15
	printf("%d\n", mySumFunction(x, y));
	
//	// 03
	double a = 2, b = 4;
	printf("%.2lf\n", pow(2,3));						// Built-Int function
	printf("%.2lf\n", myPowerFunction(2,3));			// User-Defined Function
	
//	// 04
	int arrN[5] = {5,4,3,2,1};
	// the input: array and the size of array
	myFunctionPrintArray(arrN, 5);
//	myFunctionPrintArray(&arrN[0], 5);
	puts("");
	
//	// 05
	char str1[300] = "Blue Card";
	char str2[300] = "8lue Card";
	char str3[300] = "{ard";
	printf("\n%d\n", myFunctionCheckAllAlphabet(str1));
	printf("%d\n", myFunctionCheckAllAlphabet(str2));
	printf("%d\n", myFunctionCheckAllAlphabet(str3));
	
	// 06
	int q = 5;
	int w = 10;
	printf("\nbefore swap	: q = %d, w = %d\n", q, w);
	myFunctionSwap(q, w);
	printf("after swap	: q = %d, w = %d\n", q, w);
	
	// 07
	printf("\nbefore swap	: q = %d, w = %d\n", q, w);
	myFunctionSwapUsingReference(&q, &w);
	printf("after swap	: q = %d, w = %d\n", q, w);

	return (0);
}

void myFunctionSwap(int q, int w){
	int temp;
	temp = q;
	q = w;
	w = temp;
	printf("in the swap	: q = %d, w = %d\n", q, w);	
}
