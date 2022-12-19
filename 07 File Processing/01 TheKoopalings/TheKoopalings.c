#include<stdio.h>

int main() {
	int order[10] = {0};
	char name[10][200] = {""};
	
	int n = 0;						// for counting number of rows
	int i = 0;

	// PART 1 - READ DATA FROM A FILE
	FILE *in = fopen("data.in","r");							// read file (stdin)	
	if(in == NULL) printf("Failed to open file!!\n");			// optional (debugging)

	// reads the given stream until the end-of-file
	while(!feof(in)){ // feof(in) == 0
    	// EXAMPLE DATA
		// 4 Iggy 3
	    fscanf(in, "%d %s\n", &order[n], &name[n]);
		n++;
	}
	
	// PART 2 - PRINT THE DATA AND ADD ADDTIONAL FORMAT
	printf("%-5s %-15s\n", "Order", "Koopalings");				// HEADER
	for(i=0 ; i<n ; i++) {
		printf("%-5d %-15s\n", order[i], name[i]);
	}

    fclose(in);
	return (0);
}
