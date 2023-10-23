#include <stdio.h>

int function1(int a);
int function2(int b);

int main() {
    int x;

	// Pointer to function is the address of a function in the memory
    int(*f)(int);
    
	f = function1;
    x = (*f)(3);
    printf("x = %d\n", x);

    f = function2;
    x = (*f)(3);
    printf("x = %d\n", x);
    
	getchar();
    return(0);
}

int function1(int a) {
    a++;
    return a;
}

int function2(int b) {
    b = b * b;
    return b;
}