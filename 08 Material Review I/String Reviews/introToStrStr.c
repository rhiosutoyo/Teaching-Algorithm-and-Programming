#include <stdio.h>
#include <string.h>

int main() {
    char str1D[200] = "This is an example sentence";
    // STRSTR
    // finds the first occurrence of the substring needle in the string haystack

    // returns a pointer to the first occurrence in haystack of any of the entire sequence of characters specified in needle
    printf("%x\n", strstr(str1D, "ex"));

    // or a null pointer if the sequence is not present in haystack.
    printf("%x\n", strstr(str1D, "wow"));
    printf("%x\n", strstr(str1D, "exm"));
    return 0;
}

