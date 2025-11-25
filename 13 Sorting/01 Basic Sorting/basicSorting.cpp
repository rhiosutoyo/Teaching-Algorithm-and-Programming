#include<stdio.h>

void bubbleSort(int data[], int n){
	int i, j;
	int temp;
    // OUTER LOOP
	for(i=0; i<n-1; i++){
	    // INNER LOOP 
		for(j=0; j<n-1-i; j++){
			if(data[j] > data[j+1]){
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
			}
		}
	}
}

void swap(int *a, int *b){
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void SelectionSort(int data[], int n){
	int i, j, idx_low;
	
	for(i=0;i<n-1;i++){
		idx_low = i;
		for (j = i + 1; j < n; j++) 
			if (data[idx_low] < data[j]) idx_low = j;
		if (idx_low > i) swap(&data[i], &data[idx_low]);
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

	puts("\n\nBubble Sort (ASCENDING)");
	bubbleSort(data, 6);
	printData(data, 6);
	
	puts("\n\nSelection Sort (DESCENDING)");
	SelectionSort(data, 6);
	printData(data, 6);	

	return (0);
}