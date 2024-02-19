//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

// 2d array

#include<stdio.h>

int main(){
	int i, j = 0;
	int arr2d[3][5] = {0};
	
	// input
	int input = 0;
	printf("Please input a number: ");
	scanf("%d", &input);
	for(i=0 ; i<3 ; i++){
		for(j=0 ; j<5 ; j++){
			arr2d[i][j] = input;
		}
	}
	
	// print
	for(i=0 ; i<3 ; i++){
		for(j=0 ; j<5 ; j++){			
			if(i == 0)
				printf("%2d ", arr2d[i][j]);
			else if (j == 0)
				printf("%2d ", arr2d[i][j]);
			else if (j == 5-1)
				printf("%2d ", arr2d[i][j]);
			else if (i == 3-1)
				printf("%2d ", arr2d[i][j]);
			else
				printf("   ");
		}
		printf("\n");
	}
	return(0);
}
