printf("Enter a number: ");
scanf("%d", &n);

for (i = 1; i <= n; i++) {
    factorial = factorial * i;
}

printf("Factorial of %d = %lld", n, factorial);

return 0;