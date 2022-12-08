#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int T, N;
	int sum;

	scanf("%d", &T);
	for(int i=0 ; i<T ; i++){
		sum = 0;		// reset utk tiap case
		
		// 3467
		scanf("%d", &N);

		while(N != 0){		// 3
			// ambil digit terakhir
			// tambahkan ke sum
			sum = sum + (N%10);		// 3 % 10 = 6

			// hilangkan digit terakhir
			N = N / 10;				// 3 / 10 = 0
		}
		printf("%d\n", sum);
	}
	getchar();
	return 0;
}
