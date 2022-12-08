#include<stdio.h>
#include<math.h>

// stdio and math example
int main(){
	char name[20];		// a variable for string value
	double age;			// a variable for floating number

	printf("Hi! What is your name? ");		// print string
	scanf("%s", &name);						// ask for a string	
	printf("Hello %s! Nice to meet you! %c\n\n", name, 1); // use the name

	printf("How old are you, %s? ", name);			// use the name
	scanf("%lf", &age);								// ask for an integer	
	printf("You age power by 2 is %.0lf\n", pow(age	,2));	// use power function
	
	return (0);
}
