#include <stdio.h>

int main() {
    int battery = 100;

    while (battery >= 10) {
        printf("Battery level: %d%%\n", battery);
        battery -= 10;
    }
    printf(" Battery Empty");
    
}
