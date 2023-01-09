#include<stdio.h>

struct Student{
	char NIM[11];
	char name[50];
	double height;
	char gender;
	int group;
};

void printAllData(struct Student students[], int n){
	int i = 0;
	for(i=0 ; i<n ; i++) {
		printf("%-7s: %s\n", "NIM", students[i].NIM);
		printf("%-7s: %s\n", "Name", students[i].name);
		printf("%-7s: %.2lf\n", "Height", students[i].height);
		printf("%-7s: %c\n", "Gender", students[i].gender);
		printf("%-7s: %d\n", "Group", students[i].group);
		printf("\n");
	}
}

void printAllDataInRows(struct Student students[], int n){
	int i = 0;
	printf("-- START PRINT --\n");
	for(i=0 ; i<n ; i++) {
		printf("%s %-40s %.2lf %5c %5d\n", students[i].NIM, students[i].name, 
		students[i].height, students[i].gender, students[i].group);
	}
	printf("-- END PRINT --\n\n");
}

void swapContent(struct Student *A, struct Student *B){
	struct Student temp;

	temp = *A;
	*A = *B;
	*B = temp;
}

void bubbleSortAscByHeight(struct Student students[], int n){
    int i = 0, j = 0;
    for(i=0 ; i<n ; i++){
        for(j=0 ; j < n - i - 1 ; j++){
            if(students[j].height > students[j+1].height){
            	swapContent(&students[j], &students[j+1]);            	
            }
        }
    }
}

void bubbleSortDescendByHeight(struct Student students[], int n){
    int i = 0, j = 0;
    for(i=0 ; i<n ; i++){
        for(j=0 ; j < n - i - 1 ; j++){
            if(students[j].height < students[j+1].height){
            	swapContent(&students[j], &students[j+1]);            	
            }
        }
    }
}

int main() {
	struct Student students[50];
	int n = 0;													// for counting number of rows
	int i = 0;
	
	// PART 1 - READ DATA FROM A FILE
	FILE *in = fopen("data.in","r");							// read file (stdin)	
	if(in == NULL) printf("Failed to open file!!\n");			// optional (debugging)

	// reads the given stream until the end-of-file
	while(!feof(in)){
		/* DATA EXAMPLE:
		   2440057501#NICOLE#160.81#F#6
		   2440086501#RAFAEL RICHARD RUSSELL#156.69#M#6
        */
		fscanf(in, "%[^#]#%[^#]#%lf#%c#%d\n", &students[n].NIM, &students[n].name, &students[n].height, &students[n].gender, &students[n].group);
		n++;
	}
	
	// PART 2 - PRINT THE DATA AND ADD ADDTIONAL FORMAT
//	printAllData(students, n);
	printAllDataInRows(students, n);
	bubbleSortAscByHeight(students, n);
	printAllDataInRows(students, n);
	bubbleSortDescendByHeight(students, n);
	printAllDataInRows(students, n);
	
	// PRACTICE #1
	// CREATE A FUNCTION TO SORT STUDENTS BY GROUP FROM BIG TO SMALL (DESCENDING)
	// ## call your function here
	// printAllDataInRows(students, n);
	
	// PRACTICE #2
	// CREATE A FUNCTION TO SORT STUDENTS BY NAME FROM A TO Z (ASCENDING)
	// ## call your function here
	// printAllDataInRows(students, n);

	// PART 3.1 - WRITE THE DATA INTO OUTPUT FILE
	FILE *out = fopen("studentFemale.out","w");							// write file (stdout)
	for(i=0 ; i<n ; i++) {
		if(students[i].gender == 'F'){
			fprintf(out,"%s#%s#%.2lf#%c#%d\n", students[i].NIM, students[i].name, students[i].height, students[i].gender, students[i].group);
		}
	}
	fclose(out);			// close file

	// PART 3.2 - WRITE THE DATA INTO OUTPUT FILE
	out = fopen("tallMale.out","w");							// write file (stdout)
	for(i=0 ; i<n ; i++) {
		if(students[i].gender == 'M' && students[i].height >= 165){
			fprintf(out,"%s#%s#%.2lf#%c#%d\n", students[i].NIM, students[i].name, students[i].height, students[i].gender, students[i].group);
		}
	}
	fclose(out);			// close file
	fclose(in);				// close file
	return (0);
}
