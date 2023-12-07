#include<stdio.h>
#include<string.h>

struct data {
    char videoTitle[1001];
    char artistName[1001];
    int viewCount;
} video[100];

void sort(int counter) {
    int i, j, temp;
    for(i=0; i<counter-1; i++) {
        temp = i;
        for(j=i+1; j<counter; j++) {
            if(video[j].viewCount > video[temp].viewCount) {
                temp = j;
            }
            else if(video[j].viewCount == video[temp].viewCount && strcmp(video[j].videoTitle, video[temp].videoTitle) < 0) {
                temp = j;
            }
        }

        struct data v = video[temp];
        video[temp] = video[i];
        video[i] = v;
    }
}

int main() {
    FILE* fp = fopen("file.txt", "r");
    int i, counter = 0;

    while(fscanf(fp, "%[^#]#%[^#]#%d\n", video[counter].videoTitle, video[counter].artistName, &video[counter].viewCount) != EOF) {
        counter++;
    } 

    sort(counter);

    for(i=0; i<counter; i++) {
        printf("%s by %s - %d\n", video[i].videoTitle, video[i].artistName, video[i].viewCount);
    }
    
    fclose(fp);
    return 0;
}