#include <stdio.h>

int main() {
    int i = 4;
    int sum = 0;

    while (i <= 6) {
        sum += i;
        i++;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
