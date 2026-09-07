#include<stdio.h>
#include<string.h>

int main(){
	printf("Two-dimensional arrays for numbers:\n");
	// array for matrix
	int matrix[3][3] = {0};			// to initialize all var to 0
	matrix[2][0] = 2;
	matrix[0][2] = 9;

	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}	
	printf("\n");
	
	
	

	printf("Two-dimensional arrays for string:\n");

	// array for string name
	char name[100] = "Rhio";
	
	// array for list of name
	char list_of_name[5][10];	
	strcpy(list_of_name[0], "Mario");
	strcpy(list_of_name[1], "Luigi");
	strcpy(list_of_name[2], "Peach");
	strcpy(list_of_name[3], "Bowser");
	strcpy(list_of_name[4], "Toad");	
	for(int i=0 ; i<5 ; i++){			// i = 0 1 2 3 4
		printf("%s\n", list_of_name[i]);
	}
	printf("%c\n", list_of_name[3][0]);
	printf("%c\n", list_of_name[1][3]);
	
	// list of student name in every class
	char list_of_list_of_name[3][40][200];
	// 3 class, 40 students for each class, 200 character for each student
	
	return (0);	
}
