#include<stdio.h>
#include<string.h>

struct data{
	char name[100];
	int qty;
};

void printData(struct data items[], int count){
	printf("%2s %-30s %5s\n", "NO", "ITEM", "QTY");
	for(int i=0 ; i<count ; i++){
		printf("%2d %-30s %5d\n", i+1, items[i].name, items[i].qty);
	}
}

void bubbleSortAscByQty(struct data items[], int count){
	struct data temp;
	for(int i=0 ; i<count-1 ; i++){
		// Last i elements are already in place  
		for(int j=0 ; j<count-i-1 ; j++){
			if( items[j].qty > items[j+1].qty ){
				temp = items[j];
				items[j] = items[j+1];
				items[j+1] = temp;
			}
		}
	}
}

void bubbleSortDescByQty(struct data items[], int count){
	struct data temp;
	for(int i=0 ; i<count-1 ; i++){
		// Last i elements are already in place  
		for(int j=0 ; j<count-i-1 ; j++){
			if( items[j].qty < items[j+1].qty ){
				temp = items[j];
				items[j] = items[j+1];
				items[j+1] = temp;
			}
		}
	}
}
int main(){
	struct data items[15];
	FILE *in = fopen("data.txt", "r");
	if(in == NULL) printf("OPEN FAILED!");
	
	int count = 0;
	while(!feof(in)){
		fscanf(in, "%[^#]#%d\n", &items[count].name, &items[count].qty);
		count++;	
	}
	printData(items, count);
	puts("");
	
	bubbleSortAscByQty(items, count);
	printData(items, count);
	puts("");

	bubbleSortDescByQty(items, count);
	printData(items, count);
	puts("");
	
	return (0);	
}
