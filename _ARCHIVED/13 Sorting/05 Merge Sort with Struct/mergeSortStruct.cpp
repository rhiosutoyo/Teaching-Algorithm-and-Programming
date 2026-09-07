#include<stdio.h>

struct Student{
	char NIM[11];
	char name[50];
	double height;
	char gender;
	int group;
};

// Merges two subarrays of arr[]
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(struct Student students[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

	/* create temp arrays */
    struct Student L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for(i=0 ; i<n1 ; i++)
        L[i] = students[l+i];
    for(j=0 ; j<n2 ; j++)
        R[j] = students[m+1+j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray

    while(i < n1 && j < n2){
        if(L[i].height <= R[j].height){
            students[k] = L[i];
            i++;
        }
        else{
            students[k] = R[j];
            j++;
        }
        k++;
    }

	/* Copy the remaining elements of L[], if there are any */
    while(i < n1){
        students[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while(j < n2){
        students[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(struct Student students[], int l, int r){
    if(l < r){
        int m = (l + r) / 2;
        mergeSort(students, l, m);
        mergeSort(students, m+1, r);
        merge(students, l, m, r);
    }
}

int binarySearch(int ai[], int l, int r, int Y){
    int result = 0;
    while(l <= r){
        int mid = (l + r) / 2;
        if(ai[mid] <= Y){
            result = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return result;
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

int main(){
	struct Student students[50];
	int n = 0;													// for counting number of rows
	int i = 0;
	
	// READ DATA FROM A FILE
	FILE *in = fopen("data.in","r");							// read file (stdin)	
	if(in == NULL) printf("Failed to open file!!\n");			// optional (debugging)

	// reads the given stream until the end-of-file
	while(!feof(in)){
		/* DATA EXAMPLE:
		   2440057501#NICOLE#160.81#F#6
		   2440086501#RAFAEL RICHARD RUSSELL#156.69#M#6
        */
		fscanf(in, "%[^#]#%[^#]#%lf#%c#%d\n", students[n].NIM, students[n].name, &students[n].height, &students[n].gender, &students[n].group);
		n++;
	}	
	printAllDataInRows(students, n);
	
	// merge sort with struct
	mergeSort(students, 0, n-1);
	printAllDataInRows(students, n);
    return 0;
}
