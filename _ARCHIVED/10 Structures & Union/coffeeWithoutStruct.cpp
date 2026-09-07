#include <stdio.h>
#include <string.h>

// FUNCTION TO PRINT COFFEE DATA
void printCoffeeMenu(char name[][200], int caffeine[], double price[], int temperature[], int c) {
	for (int i = 0; i < c; i++) {
		printf("%-15s %10d mg %10.2lf $ %10d °C\n", name[i], caffeine[i], price[i], temperature[i]);
	}
}

// FUNCTION TO SWAP COFFEE DATA IN THE ARRAY
void swapCoffeePosition(char name[][200], int caffeine[], double price[], int temperature[], int x, int y) {
	char tempChar[200] = "";
	int tempInt = 0;
	double tempDouble = 0;

	// SWAP NAME
	strcpy(tempChar, name[x]);
	strcpy(name[x], name[y]);
	strcpy(name[y], tempChar);

	// SWAP CAFFEINE
	tempInt = caffeine[x];
	caffeine[x] = caffeine[y];
	caffeine[y] = tempInt;

	// SWAP PRICE
	tempDouble = price[x];
	price[x] = price[y];
	price[y] = tempDouble;

	// SWAP TEMPERATURE
	tempInt = temperature[x];
	temperature[x] = temperature[y];
	temperature[y] = tempInt;
}

int main() {
	// HOW MANY COFFEE TYPES WE WANT TO DISPLAY
	int count = 5;

	// THE INPUT
	char name[5][200] = {"Espresso", "Latte", "Cappuccino", "Americano", "Mocha"};
	int caffeine[5]   = {80, 75, 70, 90, 65};         // in mg
	double price[5]   = {2.50, 3.75, 3.50, 2.80, 4.20}; // in dollars
	int temperature[5]= {70, 65, 68, 75, 60};         // in Celsius

	// PRINT INITIAL COFFEE MENU
	printf("=== Coffee Menu ===\n");
	printCoffeeMenu(name, caffeine, price, temperature, count);

	// SWAP DATA IN THE ARRAY (e.g., swap Latte and Mocha)
	int x = 1;
	int y = 4;
	swapCoffeePosition(name, caffeine, price, temperature, x, y);

	puts("\n=== Coffee Menu After Swapping ===");
	printCoffeeMenu(name, caffeine, price, temperature, count);

	return 0;
}
