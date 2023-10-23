//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

#include<stdio.h>

int i,j;	// global variable

void inputArr(int arr[]) {
	for(i=1 ; i<=5 ; i++) {
		printf("Masukkan nilai arr-%d: ", i);
		scanf("%d", &arr[i]);
		fflush(stdin);
	}
}

void printArr(int arr[]) {
	for(i=1 ; i<=5 ; i++) {
		printf("Arr-%d: %d\n",i , arr[i]);
	}
}

int max_value(int arr[]) {
	int max_val = -1;
	for(i=1 ; i<=5 ; i++) {
		if(max_val < arr[i]) {
			// jika max_val lebih kecil dari nilai yang dicek, maka ganti max_val dengan nilai tersebut
			max_val = arr[i];
		}
	}
	return max_val;
}

int min_value(int arr[]) {
	int min_val = 9999999;
	for(i=1 ; i<=5 ; i++) {
		if(min_val > arr[i]) {
			// jika min_val lebih besar dari nilai yang dicek, maka ganti max_val dengan nilai tersebut
			min_val = arr[i];
		}
	}
	return min_val;
}

void printResult(int max_val, int min_val, int max_inter) {
	printf("maximal value dari array: %d\n", max_val);
	printf("minimal value dari array: %d\n", min_val);
	printf("maximal interval dari array: %d\n", max_inter);
}

int max_interval(int arr[]) {
	int max_inter = -1;
	int interval  = -1;

	for(i=1 ; i<5 ; i++){
		for(j=(i+1) ; j<=5 ; j++){
			interval = arr[i] - arr[j];
			// agar hasil selalu positif
			if(interval < -1) interval *= -1;

			if(max_inter < interval) {
				max_inter = interval;
			}
		}
	}
	return max_inter;
}

int main() {
	int arr[6], i;
	int max_val, min_val, max_inter;

	inputArr(arr);
	max_val = max_value(arr);
	min_val = min_value(arr);
	max_inter = max_interval(arr);

	printArr(arr);
	printResult(max_val, min_val, max_inter);
	
	getchar();
	return (0);
}
