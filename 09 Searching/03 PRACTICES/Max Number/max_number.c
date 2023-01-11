#include<stdio.h>

int main() {
    int numbers[100];
    int n, m, i, idx;

    //set default value
    for(i=0; i<100; i++) numbers[i] = -1;

    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        scanf("%d", &numbers[i]);
    }

    for(i=0; i<m; i++) {
        int deleteNumber;
        scanf("%d", &deleteNumber);
        for(idx =0 ; idx<n; idx++) {
            if(numbers[idx] == deleteNumber) {
                numbers[idx] = -1;
            }
        }
    }
    
    for(i=0; i<n; i++) {
    	printf("%d ", numbers[i]);
	}
	
	puts("");

    int maxNumber = -1;
    for(i=0; i<n; i++) {
        if(numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    printf("Maximum number is %d\n", maxNumber);
    
    return 0;
}
