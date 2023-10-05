//##############################################
//## 	 COMP6047001 - Algorithm and Programming			
//## 	 Dr. Rhio Sutoyo, S.Kom., M.Sc.		
//## 	 Bina Nusantara University			
//##############################################

// what about input the the size of the 2darray?
#include<stdio.h>

int main(){
	int i = 0, j = 0;	

	// how to clean the variable from garbage value
//	float x;  // 7887
//	if(x == 0)
		// maka artinya kosong

	int n = 0, m = 0;			// total rows and columns
	scanf("%d %d", &n, &m);		// input rows and columns

	int arr2d[n][m];			// declare the 2d array based on the rows and columns

	// rows
	for(i=0 ; i<n ; i++){
		// columns
		for(j=0 ; j<m ; j++){
				arr2d[i][j] = 0;
				printf("%2d ", arr2d[i][j]);
		}
		printf("\n");
	}
	return(0);
}


