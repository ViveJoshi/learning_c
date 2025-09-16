int main() {
    int num1, num2, result;
    char op;

  
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  

   
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2; 
                printf("Result: %d", result);
            } else {
                printf("Error: Division by zero.");
            }
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
