#include <stdio.h>

int main() {
    int temperature;

    
    printf("Enter the temperature : ");
    scanf("%d", &temperature);

 
    if (temperature >= 35.0) {
        printf("It's hot\n");
    }
    else if (temperature <= 15.0) {
        printf(" It's cold\n");
    }
    else {
        printf(" The temperature is moderate.\n");
    }

    return 0;
}
