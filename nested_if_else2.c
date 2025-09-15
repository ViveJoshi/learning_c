#include <stdio.h>

int main() {
    int isOpen, foodAvailable;

    printf("Is the restaurant open? (1 = yes, 0 = no): ");
    scanf("%d", &isOpen);

    if (isOpen == 1) {
        printf("Is food available? (1 = yes, 0 = no): ");
        scanf("%d", &foodAvailable);

        if (foodAvailable == 1) {
            printf("You can place your order now!\n");
        } else {
            printf(" Restaurant is open, but food is currently unavailable.\n");
        }
    } else {
        printf("Restaurant is closed. Please come back later.\n");
    }

    return 0;
}
