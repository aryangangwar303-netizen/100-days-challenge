printf("Enter a number: ");
scanf("%d", &n);

if (n < 10) {
    printf("After swapping = %d", n);
    return 0;
}

last = n % 10;

digits = (int)log10(n);
power = (int)pow(10, digits);

first = n / power;

middle = n % power;
middle = middle / 10;

result = last * power + middle * 10 + first;

printf("After swapping = %d", result);

return 0;