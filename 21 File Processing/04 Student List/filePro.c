#include<stdio.h>

struct Student{
	int id;
	char name[100];
	double GPA;
	char gender;
};

int main(){
	// 1. open file
	FILE *fp;
	fp = fopen("data.csv", "r");
	if(fp == NULL)
		printf("data not found!\n");

	// 2. read stream from file, and save it to the variables
	struct Student students[10];

	int i=0;
	// 0 = not end of file
	// 1 = end of file
	while(feof(fp) != 1){
		fscanf(fp, "%d;%[^;];%lf;%c\n", &students[i].id, students[i].name, &students[i].GPA, &students[i].gender);
		printf("%d | %-20s | %.2lf | %c\n",  students[i].id, students[i].name, students[i].GPA, students[i].gender);
		i++;
	}

	// 3. change / modify the value
	students[4].GPA = 99.7;
	students[5].GPA = 98.0;

	// 4. write to file
	puts("");
	fp = fopen("data.csv", "w");
	for(int j=0;j<i;j++){
		fprintf(fp,"%d;%s;%.2lf;%c\n",  students[j].id, students[j].name, students[j].GPA, students[j].gender);
	}
	fclose(fp);
	return 0;
}

