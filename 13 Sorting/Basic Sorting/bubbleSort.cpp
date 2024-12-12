#include<stdio.h>

void bubbleSort(int data[], int n){
	int i, j;
	int temp;
	// OUTER LOOP
	for(i=1;i<n;i++){
		// INNER LOOP
		for(j=n-1;j>=i;j--){
			// ASCENDING
			if(data[j-1] > data[j]){
				// PASSING BY REFERENCE
				temp = data[j-1];
				data[j-1] = data[j];
				data[j] = temp;
			}
		}
	}
}

// FOR PRINT RESULT
void printData(int data[], int n){
	int i;
	for(i=0;i<n;i++) 
		printf("%d ", data[i]);
}

int main(){
	int data[100] = {60,50,40,30,10,20};

	printData(data, 6);
	puts("");

	bubbleSort(data, 6);
	printData(data, 6);	

	return (0);
}
