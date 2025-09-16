#include <stdio.h>

int main() {
    int choice, qty;
    char moreOrders;
    int totalAmount = 0;
    
    do {
        printf("\n Menu");
        printf("\n 1. Pizza     price = 180rs/pcs");
        printf("\n 2. Burger    price = 100rs/pcs");
        printf("\n 3. Dosa      price = 120rs/pcs");
        printf("\n 4. Idli      price = 50rs/pcs");
        printf("\n Please Enter your choice... : ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nYou have selected Pizza.");
                printf("\n Enter the quantity : ");
                scanf("%d", &qty);
                totalAmount += qty * 180;
                printf("Amount : %d\n", qty * 180);
                break;
            case 2:
                printf("\nYou have selected Burger.");
                printf("\n Enter the quantity : ");
                scanf("%d", &qty);
                totalAmount += qty * 100;
                printf("Amount : %d\n", qty * 100);
                break;
            case 3:
                printf("\n You have selected Dosa.");
                printf("\n Enter the quantity : ");
                scanf("%d", &qty);
                totalAmount += qty * 120;
                printf("Amount : %d\n", qty * 120);
                break;
            case 4:
                printf("\n You have selected Idli.");
                printf("Enter the quantity : ");
                scanf("%d", &qty);
                totalAmount += qty * 50;
                printf("Amount : %d ", qty * 50);
                break;
            default:
                printf("\n Invalid choice!");
                break;
        }

        printf("Total Amount is = %d\n", totalAmount);
        printf("Do you want to place more orders ? (y/n): ");
        scanf(" %c", &moreOrders);

    } while(moreOrders == 'y' || moreOrders == 'Y');

    printf("\nFinal Bill = %d\n", totalAmount);
    printf("\n Thank you for your order!");

    return 0;
}
