#include <stdio.h>
#include <string.h>

struct Date {
    int day, month, year;
};

struct Developer {
    char name[50];
    char country[30];
};

struct Game {
    int appId;
    char title[50];
    float price;
    struct Date releaseDate;      // TODO 1
    struct Developer dev;         // TODO 2
};

void printGame(struct Game g) {   // TODO 5
    printf("[%d] %s | $%.2f\n", g.appId, g.title, g.price);
    printf("Released: %d/%d/%d\n",
           g.releaseDate.day, g.releaseDate.month, g.releaseDate.year);
    printf("Developer: %s (%s)\n", g.dev.name, g.dev.country);
}

void applyDiscount(struct Game *g, float percent) {   // TODO 6
    g->price = g->price * (1 - percent / 100);
}

int main(void) {
    // Parts 1-2: one game, filled member by member
    struct Game g1;
    g1.appId = 570;
    strcpy(g1.title, "Dota 2");
    g1.price = 0.0f;
    g1.releaseDate.day = 9;       // TODO 3
    g1.releaseDate.month = 7;
    g1.releaseDate.year = 2013;
    strcpy(g1.dev.name, "Valve");       // TODO 4
    strcpy(g1.dev.country, "USA");
    printGame(g1);
    printf("\n");

    // Part 3: array of games
    struct Game library[3] = {
        {570,     "Dota 2",         0.00f,  {9, 7, 2013},   {"Valve", "USA"}},
        {620,     "Portal 2",       9.99f,  {19, 4, 2011},  {"Valve", "USA"}},
        {1091500, "Cyberpunk 2077", 29.99f, {10, 12, 2020}, {"CD Projekt Red", "Poland"}}
    };

    float total = 0;
    for (int i = 0; i < 3; i++) {
        printGame(library[i]);
        printf("\n");
        total += library[i].price;
    }
    printf("Total price: $%.2f\n\n", total);

    // Part 4: sale
    applyDiscount(&library[2], 50);
    printf("After sale: %s is now $%.2f\n",
           library[2].title, library[2].price);


    // Cheapest and most expensive
    int min = 0, max = 0;
    for (int i = 1; i < 3; i++) {
        if (library[i].price < library[min].price) min = i;
        if (library[i].price > library[max].price) max = i;
    }
    printf("Cheapest: %s\nMost expensive: %s\n",
           library[min].title, library[max].title);

// Read a game's title with fgets
fgets(g1.title, sizeof g1.title, stdin);
g1.title[strcspn(g1.title, "\n")] = '\0';   // remove the newline

    return 0;
}