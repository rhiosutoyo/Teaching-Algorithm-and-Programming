#include <stdio.h>
#include <string.h>

// check whether a substring is located in a list of string
int main() {
    char str2D[5][200] = {"Decathlon", "Magical Garden", "Delta Spa & Health Club Pondok Indah", "Summarecon Mal Serpong", "Tick Tock Escape"};
    char subString[20] = "de";

    int i;
    for(i=0 ; i<5 ; i++){
        printf("Str %d: %s\n", i+1, str2D[i]);
        if(strstr(str2D[i], subString) != 0)
            printf("substring \"%s\" is located in the string\n", subString);
    }
    return (0);
}