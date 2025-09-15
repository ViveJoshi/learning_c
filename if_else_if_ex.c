#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 5) {
        printf("?? Ticket Free - Enjoy!\n");
    }
    else if (age >= 5 && age <= 12) {
        printf("??? Child Ticket - Half Price\n");
    }
    else if (age > 12 && age < 60) {
        printf("??? Full Ticket\n");
    }
    else if (age >= 60 && age < 75) {
        printf("?? Senior Citizen - Half Price\n");
    }
    else if (age >= 75) {
        printf("?? Super Senior - Ticket Free\n");
    }
    else {
        printf("? Invalid age entered.\n");
    }

    return 0;
}
