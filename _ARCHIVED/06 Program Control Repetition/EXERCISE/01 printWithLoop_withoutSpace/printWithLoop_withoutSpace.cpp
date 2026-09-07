#include<stdio.h>

int main(){
	int n = 0;
	scanf("%d", &n);
	
	for(int i=1 ; i<=n ; i++){
		// LOOP WITHOUT SPACE
		if(i==1) printf("%d", i);
		else printf(" %d", i);
	}
}
