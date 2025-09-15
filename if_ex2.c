int main() {
    int batteryPercentage;

    printf("Enter your mobile battery percentage: ");
    scanf("%d", &batteryPercentage);

   
    if (batteryPercentage >= 80) {
        printf("?? Battery is full. You're good to go!\n");
    } else if (batteryPercentage >= 50) {
        printf("?? Battery is moderate. You might want to charge soon.\n");
    } else if (batteryPercentage >= 20) {
        printf("?? Battery is low. Consider charging your phone.\n");
    } else if (batteryPercentage > 0) {
        printf("?? Battery is critically low! Plug in immediately!\n");
    } else {
        printf("? Invalid battery percentage.\n");
    }

    return 0;
}

