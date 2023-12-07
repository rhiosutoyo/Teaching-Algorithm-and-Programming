//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

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
		fscanf(in, "%[^#]#%[^#]#%lf#%c#%d\n", 
		&students[n].NIM, 
		&students[n].name, 
		&students[n].height, 
		&students[n].gender, 
		&students[n].group);
		n++;
	}
	
	// PART 2 - PRINT THE DATA AND ADD ADDTIONAL FORMAT
	printAllData(students, n);
	
	// PART 3.1 - WRITE THE DATA INTO OUTPUT FILE
	FILE *out = fopen("studentFemale.out","w");							// write file (stdout)
	for(i=0 ; i<n ; i++) {
		if(students[i].gender == 'F'){
			// manipulate data of group
			students[i].group = 99;
			
			fprintf(out,"%s#%s#%.2lf#%c#%d\n", 
			students[i].NIM, 
			students[i].name, 
			students[i].height, 
			students[i].gender, 
			students[i].group);
		}
	}
	fclose(out);			// close file

	// PART 3.2 - WRITE THE DATA INTO OUTPUT FILE
	out = fopen("tallMale.out","w");							// write file (stdout)
	for(i=0 ; i<n ; i++) {
		if(students[i].gender == 'M' && students[i].height >= 165){
//			fprintf(out,"%s#%s#%.2lf#%c#%d\n", 
//			students[i].NIM, 
//			students[i].name, 
//			students[i].height, 
//			students[i].gender, 
//			students[i].group);

//			2440059154#JOSHUA ALEXANDER CORNELIS SIMANJUNTAK#166.31#M#4

//			JOSHUA ALEXANDER CORNELIS SIMANJUNTAK
//			height = 166.31 

			fprintf(out, "%s\nheight = %.2lf\n\n",
			students[i].name,
			students[i].height);
		}
	}
	fclose(out);			// close file

	fclose(in);				// close file
	return (0);
}
