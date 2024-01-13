#include<stdio.h>
#include<string.h>

struct data{
	char name[100];
	int qty;
};

// PRINT ITEMS
void printData(struct data items[], int count){
	printf("%2s %-30s %5s\n", "NO", "ITEM", "QTY");
	for(int i=0 ; i<count ; i++){
		printf("%2d %-30s %5d\n", i+1, items[i].name, items[i].qty);
	}
}

int linearSearchByName(struct data items[], int count, char key[]){
	for(int i=0 ; i<count ; i++){
		if( strcmpi(items[i].name, key) == 0 ) return i;
	}
	return -1;
}

void linearSearchByQty(struct data items[], int count, int qtyKey, int qtyItemRes[], 
int *qtyCountRes){
	for(int i=0 ; i<count ; i++){
		if( items[i].qty == qtyKey ) {
			qtyItemRes[*qtyCountRes] = i;
			*qtyCountRes = *qtyCountRes + 1;
		}
	}
}

int main(){
	struct data items[15];
	
	// OPEN FILE
	FILE *in = fopen("data.txt", "r");
	if(in == NULL) printf("OPEN FAILED!");
	
	// READ FILE
	int count = 0;
	while(!feof(in)){
		fscanf(in, "%[^#]#%d\n", &items[count].name, &items[count].qty);
		count++;	
	}
	
	// PRINT ITEMS
	printData(items, count);
	puts("");
	
	// LINEAR SEARCH BY NAME
	char key[100] = "Water Pump";						// search key
	int res = linearSearchByName(items, count, key);	// find the item	
	if(res > 0) printf("%s is located in the index %d\n", key, res);
	else printf("%s is not located in the dataset\n", key);

	strcpy(key, "payung terbalik");
	res = linearSearchByName(items, count, key);
	if(res > 0) printf("%s is located in the index %d\n", key, res);
	else printf("%s is not located in the dataset\n", key);

	// LINEAR SEARCH BY QTY (MULTIPLE RESULTS)
	int qtyKey = 10;

	// RESULT CONTAINER
	int qtyItemRes[15];
	int qtyCountRes = 0;

	linearSearchByQty(items, count, qtyKey, qtyItemRes, &qtyCountRes);
	if(qtyCountRes > 0){
		printf("items that has %d number of qty are located in the index: ", qtyKey);
		for(int z=0 ; z<qtyCountRes ; z++) printf("%d ", qtyItemRes[z]);
	}
	else printf("there is no item that has %d number of qty", qtyKey);
	
	return (0);	
}
