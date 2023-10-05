#include<stdio.h>

int main() {
	int n, i, j, k;
	int space = 0;
	int flag = 0;
	int temp;
	
	do{
		printf("Input must be an odd number: ");
		scanf("%d", &n);
	}while(n%2 == 0);

	for(i=0; i<n ; i++) {
		// print baris 1 dan baris terakhir
		if(i == 0 || i == n-1) {
			for(j=0; j<n ; j++) {
				printf("*");
			}
		}
		// print baris yang ada spasinya
		else {
			// cari tahu bintang yang harus dicetak
			temp = (n-space)/2;
			// print bintang kiri
			for(k=0 ; k<temp ; k++){
				printf("*");
			}
			// print spasi
			for(k=0 ; k<space ; k++){
				printf(" ");
			}
			// print bintang kanan
			for(k=0 ; k<temp ; k++){
				printf("*");
			}
		}

		// pindah baris
		printf("\n");
		if(space < (n-2) && flag == 0) {
			if(i == 0) {
				space++;
			}
			else
				space +=2;
		}
		else {
			flag = 1;
			if(i == (n-2)) {
				space--;
			}
			else {
				space -= 2;
			}
		}
	}
	getchar();
	return (0);
}
