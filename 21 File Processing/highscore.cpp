#include <stdio.h>

struct newHighScore{
    int score;
    char name[100];
    float money;
};

void printLoadScore(struct newHighScore d){
    printf("Current score: %d by %s\n", d.score, d.name);
    printf("Total money collected: %.2f\n\n", d.money);
}

int main() {
  	struct newHighScore d;  	
    FILE *fp;

    // 1. Load the previous score (if the file exists)
    fp = fopen("score.txt", "r");
    if (fp != NULL) {
        fscanf(fp, "%d;%[^;];%f", &d.score, &d.name, &d.money);
        fclose(fp);
    }
    printLoadScore(d);

    // 2. Ask for a new score
    printf("Enter new score: ");
    scanf("%d", &d.score);
    printf("Enter your name: ");
    scanf("%s", &d.name);
    printf("Enter money collected: ");
    scanf("%f", &d.money);
    
    // 3. Save the new score
    fp = fopen("score.txt", "w");
    if (fp == NULL) {
        printf("Error: cannot open file.\n");
        return 1;
    }
    fprintf(fp, "%d;%s;%.2f", d.score, d.name, d.money);
    fclose(fp);

    return 0;
}
