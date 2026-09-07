#include <stdio.h>
#include <string.h>

// STRUCT DEFINITION
typedef struct CoffeeInfo {
    char coffeeName[200];
    int caffeine;       // in mg
    double price;       // in dollars
    int temperature;    // in Celsius
} Coffee;

// FUNCTION TO PRINT COFFEE DATA
void printCoffeeMenu(struct CoffeeInfo coffeeMenu[], int c) {
    printf("%-15s %10s %10s %15s\n", "Coffee Name", "Caffeine", "Price", "Temperature");
    printf("---------------------------------------------------------------\n");
    for (int i = 0; i < c; i++) {
        printf("%-15s %10d mg %10.2lf $ %10d °C\n",
               coffeeMenu[i].coffeeName,
               coffeeMenu[i].caffeine,
               coffeeMenu[i].price,
               coffeeMenu[i].temperature);
    }
}

// FUNCTION TO SWAP COFFEE DATA IN THE ARRAY
void swapCoffeePosition(struct CoffeeInfo coffeeMenu[], int x, int y) {
    struct CoffeeInfo tempCoffee;

    tempCoffee = coffeeMenu[x];
    coffeeMenu[x] = coffeeMenu[y];
    coffeeMenu[y] = tempCoffee;
}

int main() {
    // HOW MANY COFFEE TYPES WE WANT TO CREATE
    int count = 5;

    // ARRAY OF STRUCTURE
    Coffee coffeeMenu[count];

    // THE INPUT
    char name[5][200] = {"Espresso", "Latte", "Cappuccino", "Americano", "Mocha"};
    int caffeine[5] =   {80, 75, 70, 90, 65};           // mg
    double price[5] =   {2.50, 3.75, 3.50, 2.80, 4.20}; // $
    int temperature[5] = {70, 65, 68, 75, 60};          // °C

    // STORE ALL INPUT INTO THE STRUCT ARRAY
    for (int i = 0; i < count; i++) {
        strcpy(coffeeMenu[i].coffeeName, name[i]);
        coffeeMenu[i].caffeine = caffeine[i];
        coffeeMenu[i].price = price[i];
        coffeeMenu[i].temperature = temperature[i];
    }

    // PRINT INITIAL COFFEE MENU
    printf("=== Coffee Menu ===\n");
    printCoffeeMenu(coffeeMenu, count);

    // SWAP DATA IN THE ARRAY (example: swap Latte and Mocha)
    int x = 1;
    int y = 4;
    swapCoffeePosition(coffeeMenu, x, y);

    puts("\n=== Coffee Menu After Swapping ===");
    printCoffeeMenu(coffeeMenu, count);

    return 0;
}
