#include <stdio.h>

int main() {
    int choice;
    int num1, num2, result;

    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("0. Exit\n");
        printf("------------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two integers: ");
            scanf("%d %d", &num1, &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result = %d\n", result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result = %d\n", result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result = %d\n", result);
                break;

            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result = %d\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case 0:
                printf("Exiting Calculator...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 0);

    return 0;
}
