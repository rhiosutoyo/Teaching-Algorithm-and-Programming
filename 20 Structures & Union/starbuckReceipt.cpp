#include <stdio.h>
#include <string.h>

// Structure to store individual coffee item details
typedef struct {
    char itemName[100];
    char size[20];
    int price; // in Rupiah
} CoffeeItem;

// Structure to store the entire receipt
typedef struct {
    char storeName[100];
    char location[100];
    char cashierName[50];
    CoffeeItem items[5];
    int itemCount;
    char promo[100];
    int totalPrice;
    int changeDue;
} Receipt;

int main() {
    // Create a receipt variable
    Receipt receipt;

    // Store general receipt info
    strcpy(receipt.storeName, "Starbucks Grand City");
    strcpy(receipt.location, "Surabaya, Indonesia");
    strcpy(receipt.cashierName, "Patricia Ivana");

    // Number of items
    receipt.itemCount = 2;

    // Item 1
    strcpy(receipt.items[0].itemName, "Almondmilk Hazelnut Latte");
    strcpy(receipt.items[0].size, "Tall");
    receipt.items[0].price = 57000;

    // Item 2
    strcpy(receipt.items[1].itemName, "Almondmilk Hazelnut Latte");
    strcpy(receipt.items[1].size, "Tall");
    receipt.items[1].price = 57000;

    // Promo
    strcpy(receipt.promo, "Starbucks Card Promo - 50% off for 2 Autumn Bev-Tall");

    // Prices
    receipt.totalPrice = 57000; // after discount
    receipt.changeDue = 0;

    // Print the receipt
    printf("===== %s =====\n", receipt.storeName);
    printf("Location: %s\n", receipt.location);
    printf("Cashier: %s\n\n", receipt.cashierName);

    printf("Items Purchased:\n");
    for (int i = 0; i < receipt.itemCount; i++) {
        printf("%d. %s (%s) - Rp%d\n",
               i + 1,
               receipt.items[i].itemName,
               receipt.items[i].size,
               receipt.items[i].price);
    }

    printf("\nPromo: %s\n", receipt.promo);
    printf("Total Price: Rp%d\n", receipt.totalPrice);
    printf("Change Due: Rp%d\n", receipt.changeDue);

    return 0;
}
