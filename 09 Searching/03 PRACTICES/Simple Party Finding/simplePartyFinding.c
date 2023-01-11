#include<stdio.h>

int binarySearch(int num[], int l, int r, int key){
	if(r >= l){
		int mid = l + (r - l) / 2;	
		if(num[mid] == key) return mid;		
		if(num[mid] > key) return binarySearch(num, l, mid-1, key);
		return binarySearch(num, mid+1, r, key);
	}
	return -1;	
}

int main(){
	int k = 0;
	int i = 0, j = 0;
	int n = 0, num[1000] = {0}, key = 0;

	scanf("%d", &k);
	for(j=1;j<=k;j++){
		
		scanf("%d", &n);
		for(i=0;i<n;i++){
			scanf("%d", &num[i]);
		}
		scanf("%d", &key);
			
		int pg[2];
		pg[0] = binarySearch(num, 0, n-1, key);
		
		if(pg[0] == -1){
			pg[1] = -1;
		}		
		else if(pg[0] == n-1){
			pg[1] = pg[0];
			pg[0] = pg[0] - 1;		
		}
		else{
			pg[1] = pg[0] + 1;	
		}
		
		if(pg[0] == -1) printf("CASE #%d: %d %d\n", j, pg[0], pg[1]);
		else printf("CASE #%d: %d %d\n", j, num[pg[0]], num[pg[1]]);
	}
	return (0);
}
