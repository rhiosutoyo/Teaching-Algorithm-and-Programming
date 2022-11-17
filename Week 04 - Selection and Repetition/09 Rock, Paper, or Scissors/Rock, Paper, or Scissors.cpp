#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int T, N;
	int p1, p2;
	char str1[10] = "";
	char str2[10] = "";

	scanf("%d",&T);
	for(int i=0 ; i<T ; i++){
		p1 = p2 = 0;

		scanf("%d",&N);
		for(int j=0 ; j<N ; j++){
			scanf("%s %s",str1, str2);
			switch(str1[0]){
				case 'R' :	if(str2[0] == 'S') p1++;
							else if(str2[0] == 'P') p2++;
							break;
				case 'S' :  if(str2[0] == 'R') p2++;
							else if(str2[0] == 'P') p1++;
							break;
				case 'P' :	if(str2[0] == 'R') p1++;
							else if(str2[0] == 'S') p2++;
							break;
			}
		}
		printf("Player 1 = %d, Player 2 = %d\n\n", p1,p2);
        printf("Winner: ");
		if(p1 > p2) printf("Player 1\n");
		else if(p1 < p2) printf("Player 2\n");
		else if(p1 == p2) printf("TIE\n");
	}
	return 0;
}
