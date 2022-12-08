#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
    int T;
    int totalKarakter;
    int charFlag[26];
    char str[200];

    // input T
    scanf("%d",&T);
    fflush(stdin);

    for(int i=0 ; i<T ; i++){
        // buat semua char flag jadi 0
        for(int i=0 ; i<26 ; i++) charFlag[i] = 0;
        // flag di reset menjadi 0
        totalKarakter = 0;

        // validasi string harus 1 - 100
        do{
            scanf("%[^\n]", str);
            fflush(stdin);
        }while(strlen(str) < 1 || strlen(str) > 100);

        // ubah semua karakter menjadi karakter besar
        for(int i=0 ; i<strlen(str) ; i++){
            str[i] = toupper(str[i]);
        }

        // cek ada berapa karakter
        for(int i=0 ; i<strlen(str) ; i++){
            charFlag[str[i]-65] = 1;
        }
        for(int i=0 ; i <26 ; i++){
            if(charFlag[i] == 1) {
                totalKarakter++;
            }
        }
        printf("%d\n",totalKarakter);
    }
    return (0);
}
