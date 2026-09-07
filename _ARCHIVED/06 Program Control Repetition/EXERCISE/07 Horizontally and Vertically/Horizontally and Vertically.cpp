#include<stdio.h>
#include<string.h>

// Number Manipulation with Array2D (hard)
int main(){
	int T;
	int N;
	int k[100][100];
	int i, j, z;

	scanf("%d", &T); getchar();
	for(i=1 ; i<=T ; i++){
		scanf("%d", &N);
		for(j=0 ; j<N ; j++){
			for(z=0 ; z<N ; z++){
				scanf("%d", &k[j][z]);
				k[j][z] = k[j][z] % 2;
			}
		}
		printf("CASE #%d: ", i);
//		for(j=0 ; j<N ; j++){
//			for(z=0 ; z<N ; z++){
//				printf("%d ", k[j][z]);
//			}
//			puts("");
//		}
		
		int counterH = 0;
		int flagH = 1;

		int counterV = 0;
		int flagV = 1;

		for(int x=0 ; x<N ; x++){
			// CHECK HORIZONTALLY
			flagH = 1;
			for(int y=0 ; y<N ; y++){
				if(k[x][y] == 0){
					flagH = 0;
					break;
				}
			}
			if(flagH == 1) counterH++;
			
			// CHECK VERTICALLY
			flagV = 1;
			for(int y=0 ; y<N ; y++){
				if(k[y][x] == 0){
					flagV = 0;
					break;
				}
			}
			if(flagV == 1) counterV++;			
		}
		printf("%d %d\n", counterH, counterV);
	}
	return (0);
}
