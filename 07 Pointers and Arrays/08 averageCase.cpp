#include <stdio.h>

// AVERAGE CASE
int main() {
    int n;
    int arr[100];
    int i;
    int total = 0;
    double avg = 0;
    
    // how many elements that you would like to input
    scanf("%d", &n);
    // scan each element and store them to the array
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }
    
    avg = (double)total / (double)n;
    printf("%d / %d = %lf\n", total, n, avg);
    
    // find out element that is more / less than avg
    int more[100], m = 0;
    int less[100], l = 0;
    for(i=0;i<n;i++){
        // less or equal
        if(arr[i] < avg){
            printf("%d <= avg\n", arr[i]);
            less[l] = arr[i];
            l++;
        }
        // more than
        else if(arr[i] > avg){
            printf("%d > avg\n", arr[i]);
            more[m] = arr[i];
            m++;
        }
    }
    
    // PRINT THE OUTPUT
    
    printf("less: ");
    for(i=0;i<l;i++){
        printf("%d ", less[i]);
    }
    puts("");
    printf("more: ");
    for(i=0;i<m;i++){
        printf("%d ", more[i]);
    }
    puts("");
    return 0;
}