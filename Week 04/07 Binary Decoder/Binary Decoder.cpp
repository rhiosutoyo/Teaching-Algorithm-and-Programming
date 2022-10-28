#include<stdio.h>

// NUMBER MANIPULATION (EASY)
// DECODING BINARY 
int main(){
	int tc;
	int N;
	int k[200];
	long long int decimal = 0;
	long long int convert = 0;
	
	scanf("%d", &tc);
	for(int i=1 ; i<=tc ; i++){
		decimal = 0;

		scanf("%d", &N);
		for(int j=0 ; j<N ; j++){
			scanf("%d", &k[j]);
		}
		printf("Case #%003d: ", i);
		for(int j=0 ; j<N ; j++){			
			convert = k[j] << N - (1 + j);
			decimal = decimal + convert;
			printf("%d ", k[j]);
		}
		printf("is %lld in decimal", decimal);
		puts("");
	}
	return (0);
}
