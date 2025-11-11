#include <stdio.h>
#include <string.h>

int main() {
    char m[] = "Welcome to Pune";
    int l = strlen(m); 

   
    for (int i = 0; i < l; i++) {
        printf("*");
    }
    printf("\n");

   
    printf("%s\n", m);

   
    for (int i = 0; i < l; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}
