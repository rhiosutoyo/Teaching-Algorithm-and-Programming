#include<stdio.h>

struct Student{
	char NIM[20];
	char name[50];
	double height;
	char gender;
	int group;
};

void printAllDataInRows(struct Student students[], int n){
	int i = 0;
	printf("-- START PRINT --\n");
	printf("%-6s %-10s %-40s %-6s %-6s %-6s\n", "INDEX", "NIM", "NAME", "HEIGHT", "GENDER", "GROUP");
	for(i=0 ; i<n ; i++) {
		printf("%-6d %-6s %-40s %.2lf %-6c %-6d\n", i, students[i].NIM, students[i].name, 
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

void bubbleSortAscByNIM(struct Student students[], int n){
    int i = 0, j = 0;
    for(i=0 ; i<n ; i++){
        for(j=0 ; j < n - i - 1 ; j++){
            if((students[j].NIM, students[j+1].NIM) < 0){
            	swapContent(&students[j], &students[j+1]);
            }
        }
    }
}

int binarySearch(struct Student students[], int l, int r, char* x) {
  if (r >= l) {
    int mid = l + (r - l) / 2;

    if (strcmp(students[mid].NIM, x) == 0) 		// If the element is present at the middle itself
      return mid;

    if (strcmp(students[mid].NIM,x) > 0) 			// If element is smaller than mid, then it can only be present in left subarray 
      return binarySearch(students, l, mid - 1, x);

    return binarySearch(students, mid + 1, r, x); 	// Else the element can only be present in right subarray 
  }
  return -1; // We reach here when element is not present in array 
}

int main() {
	int n = 0, i = 0;
	struct Student students[50];
	
	FILE *in = fopen("data.in","r");							// read file (stdin)	
	if(in == NULL) printf("Failed to open file!!\n");			// optional (debugging)
	while(!feof(in)){
		fscanf(in, "%[^#]#%[^#]#%lf#%c#%d\n", &students[n].NIM, &students[n].name, &students[n].height, &students[n].gender, &students[n].group);
		n++;
	}
	bubbleSortAscByNIM(students, n);
	printAllDataInRows(students, n);
	
	// BINARY SEARCH
	char strKey[20] = "";
	int result = -1;

	while(1){
		printf("INPUT NIM [0 FOR EXIT]: ");
		scanf("%s", strKey);

		if(strcmp(strKey, "0") == 0){
			printf("\nThank you for learning Binary Search Algorithm! %c", 3);
			break;
		}
		else{
			result = binarySearch(students, 0, n-1, strKey);
			if(result == -1)
				printf("\"%s\" is NOT located in the dataset!\n\n", strKey);
			else
				printf("\"%s - %s\" is located in the index \"%d\"\n\n", strKey, students[result].name, result);
		}
	}
	fclose(in);				// close file
	return (0);
}
