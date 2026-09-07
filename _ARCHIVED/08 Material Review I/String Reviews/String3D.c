#include <stdio.h>
#include <string.h>

int main() {
    // PRACTICE THIS FRAMEWORK 
    // 1. create
    // 2. assign
    // 3. access
    // 4. manipulate

    // create
    char string3D[2][2][200];
    int i, j, len, k;
    
    // assignment scan string3D
    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            scanf("%s", string3D[i][j]);
        }
    }
    
    // access print string3D
    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            printf("%-10s", string3D[i][j]);
        }
        printf("\n");
    }
    
    // manipulate string3D
    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            len = strlen(string3D[i][j]);
            printf("%d ", len);
        }
        printf("\n");
    }
    
    // manipulate string3D
    // count how many 'A' in the string
    int countA = 0;
    int countTemp = 0;
    for(i=0 ; i<2 ; i++){
        for(j=0 ; j<2 ; j++){
            len = strlen(string3D[i][j]);
            for(k=0 ; k<len ; k++){
                if(string3D[i][j][k] == 'A'){
                    countA++;
                    countTemp++;
                }
            }
            printf("%s %d\n", string3D[i][j], countTemp);
            countTemp = 0;
        }
    }
    printf("Total A = %d\n", countA);
    
    return 0;
}