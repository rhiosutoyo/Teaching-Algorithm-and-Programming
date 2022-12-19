#include<stdio.h>
#include<string.h>

struct city{
	char name[1000];
	double temp;
	char metric;
	double uni_metric;
};

// FORMULA (C to F)
// (18°C × 9/5) + 32 = 64.4°F

// FORMULA (F to C)
// (64.4°F - 32) × 5/9 = 18°C

double convertFtoC(double F){
	return (F - 32) * 5 / 9;
}

// FROM COLDEST TO HOTTEST CITIES
void bubbleSortTempASC(struct city cities[], int n){
	struct city temp;
	int i = 0, j = 0;
	for(i = 0 ; i < n-1 ; i++){
		for(j = 0 ; j < n-i-1 ; j++){
			if(cities[j].uni_metric > cities[j+1].uni_metric){
				temp = cities[j];
				cities[j] = cities[j+1];
				cities[j+1] = temp;
			}
		}
	}
}

// FROM A to Z
void bubbleSortCityASC(struct city cities[], int n){
	struct city temp;
	int i = 0, j = 0;
	for(i = 0 ; i < n-1 ; i++){
		for(j = 0 ; j < n-i-1 ; j++){
			if(strcmp(cities[j].name, cities[j+1].name) > 0){
				if(cities[j].uni_metric == cities[j+1].uni_metric){
					temp = cities[j];
					cities[j] = cities[j+1];
					cities[j+1] = temp;
				}
			}
		}
	}
}

void printCities(struct city cities[], int n){
	int i = 0;
	for(i=0 ; i<n ; i++){				
		printf("%s is %.2lf%c\n", cities[i].name, cities[i].temp, cities[i].metric);
//		printf("%-10s %5.2lf %2c %5.2lf\n", cities[i].name, cities[i].temp, cities[i].metric, cities[i].uni_metric);
	}
}

int main(){
	int i = 0, j = 0;

	struct city cities[100];
	FILE *in = fopen("file.txt", "r");
	if(in == NULL) printf("FAILED\n");
	
	int n = 0;
	while(fscanf(in, "%[^#]#%lf#%c\n", &cities[n].name, &cities[n].temp, &cities[n].metric) != EOF){
		if(cities[n].metric == 'C') cities[n].uni_metric = cities[n].temp;
		else {
			cities[n].uni_metric = convertFtoC(cities[n].temp);	
		}
		n++;
	}
	
	bubbleSortTempASC(cities, n);
	bubbleSortCityASC(cities, n);
	printCities(cities, n);

	return (0);
}
