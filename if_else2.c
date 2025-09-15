int main() {
    int marks;

   
    printf("Enter your marks (0–100): ");
    scanf("%d", &marks);

   
    if (marks < 0 || marks > 100) {
        printf(" Please enter a value between 0 and 100.\n");
    }
   
    else if (marks >= 35) {
        printf("? Congratulations! You have passed.\n");
    } else {
        printf("you have failed. Better luck next time!\n");
    }

    return 0;
}

