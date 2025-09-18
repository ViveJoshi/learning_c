#include <stdio.h>

int main() {
    int choice, Balance = 1000, Amount;
    char cont;

    do {
        printf("---- ATM Menu ----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("0. Exit\n");
        printf("------------------\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);  

        switch (choice) {
            case 1:
                printf("Your Balance is = %d\n", Balance);  
                break;

            case 2:
                printf("Enter Amount to Deposit: ");
                scanf("%d", &Amount);
                Balance += Amount;
                printf("Deposit Successful. New Balance is = %d\n", Balance);
                break;  
            case 3:
                printf("Enter Amount to Withdraw: ");  
                scanf("%d", &Amount);
                if (Amount <= Balance) {
                    Balance -= Amount;
                    printf("Withdraw Successful. New Balance is = %d\n", Balance);
                } else {
                    printf("Insufficient Balance\n");
                }
                break;

            case 0:
                printf("Exiting ATM...\n");  
                break;

            default:
                printf("Invalid Choice\n");
        }

        if (choice != 0) {
            printf("Do you want to continue (Y/N)? ");
            scanf(" %c", &cont); 
        } else {
            cont = 'N';
        }

    } while (cont == 'Y' || cont == 'y'); 

    return 0;
}
