#include <stdio.h>

int main() {
    int score = 0;
    FILE *fp;

    // 1. Load the previous score (if the file exists)
    fp = fopen("score.txt", "r");
    if (fp != NULL) {
        fscanf(fp, "%d", &score);
        fclose(fp);
    }
    printf("Current score: %d\n", score);

    // 2. Ask for a new score
    printf("Enter new score: ");
    scanf("%d", &score);

    // 3. Save the new score
    fp = fopen("score.txt", "w");
    if (fp == NULL) {
        printf("Error: cannot open file.\n");
        return 1;
    }
    fprintf(fp, "%d", score);
    fclose(fp);

    return 0;
}