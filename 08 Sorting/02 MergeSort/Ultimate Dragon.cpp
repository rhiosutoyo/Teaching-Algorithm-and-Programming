#include<stdio.h>

// Merges two subarrays of arr[]
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int ai[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

	/* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for(i=0 ; i<n1 ; i++)
        L[i] = ai[l+i];
    for(j=0 ; j<n2 ; j++)
        R[j] = ai[m+1+j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray

    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            ai[k] = L[i];
            i++;
        }
        else{
            ai[k] = R[j];
            j++;
        }
        k++;
    }

	/* Copy the remaining elements of L[], if there are any */
    while(i < n1){
        ai[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while(j < n2){
        ai[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int ai[], int l, int r){
	// 1: 0 < 6
    // 2: 0 < 3
    // 3: 0 < 1
    // 4: 0 < 0
    // 5: 1 < 1
    // 6:
    if(l < r){
    	// m = 0 + 6 / 2 = 3
        // m = 0 + 3 / 2 = 1
        // m = 0 + 1 / 2 = 0
        int m = (l + r) / 2;

		// 0 to 3
        // 0 to 1
        // 0 to 0 xx
        mergeSort(ai, l, m);

		// 4 to 6
        // 2 to 3
        // 1 to 1 xx
        mergeSort(ai, m+1, r);

        merge(ai, l, m, r);
    }
}

int binarySearch(int ai[], int l, int r, int Y){
    int result = 0;
    while(l <= r){
        int mid = (l + r) / 2;
        if(ai[mid] <= Y){
            result = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return result;
}

int main(){
    int N, M;
    int ai[100001];
    int Y;

    scanf("%d %d", &N, &M);

    for(int i=0 ; i<N; i++)
        scanf("%d", &ai[i]);

    mergeSort(ai, 0, N-1);

    // for(int i=0 ; i<N; i++)
    //     printf("%d ", ai[i]);

    for(int j=0; j<M ; j++){
        scanf("%d", &Y);
        int result = 0;

        if(Y < ai[0])
            result = 0;
        else if(Y >= ai[N-1]) 
            result = N;
        else
            result = binarySearch(ai, 0, N-1, Y) + 1;

        printf("%d\n", result);
    }
    return 0;
}
