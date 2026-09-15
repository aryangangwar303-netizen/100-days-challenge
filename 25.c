printf("Enter first number: ");
scanf("%d", &a);

printf("Enter operator (+, -, *, /, %%): ");
scanf(" %c", &operator);

printf("Enter second number: ");
scanf("%d", &b);

switch (operator) {
    case '+':
        printf("Result = %d", a + b);
        break;

    case '-':
        printf("Result = %d", a - b);
        break;

    case '*':
        printf("Result = %d", a * b);
        break;

    case '/':
        if (b != 0)
            printf("Result = %d", a / b);
        else
            printf("Division by zero is not allowed");
        break;

    case '%':
        if (b != 0)
            printf("Result = %d", a % b);
        else
            printf("Modulo by zero is not allowed");
        break;

    default:
        printf("Invalid operator");
}

return 0;