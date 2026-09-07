#include <stdio.h>
int main() {
    // 1D Character Arrays
    // SINGLE SENTENCE
    // THE SENTENCE IS MAXIMUM 100 CHARACTER
    char str1D[100] = "BINUS University";
    printf("%s\n", str1D);

    puts("");

    // 2D Character Arrays
    char str2D[5][100] =
    {"Flavor","AEON","Alam Sutera"};
    // FIVE SENTENCE
    // EACH SENTENCE IS MAXIMUM 100 CHARACTER
    
    // printf("%s\n", str2D[0]);
    // printf("%s\n", str2D[1]);
    // printf("%s\n", str2D[2]);

    // print character
    printf("> %c\n", str2D[1][2]);
    printf("> %c\n\n", str2D[2][5]);
    
    // count all vocals in the string 2D
    int i, j;
    int lenStr;
    int count = 0;
    for(i=0 ; i<3 ; i++){
        lenStr = strlen(str2D[i]);
        printf("%s\n", str2D[i]);
        for(j=0 ; j<lenStr ; j++){
            // convert to lowercase to only UPPERCASE ALPHABET
            char lc;
            if(str2D[i][j] >='A' && str2D[i][j] <='Z')
                lc = str2D[i][j] - 'A' + 'a';
            else
                lc = str2D[i][j];

            // printf("%c_", lc);
            // count vocals
            if(lc=='a' || lc=='i'|| lc=='u'|| lc=='e'|| lc=='o')
                count++;
        }
    }
    puts("");
    printf("VOCALS: %d\n", count);
    
    puts("");

    // 3D Character Arrays
    char str3D[2][5][100] =
    {
        {"Row1Col1","Row1Col2","Row1Col3"},
        {"Row2Col1","Row2Col2","Row3Col3"}    
    };
    printf("%s\n", str3D[0][0]);
    printf("%s\n", str3D[1][2]);
    return 0;
}


