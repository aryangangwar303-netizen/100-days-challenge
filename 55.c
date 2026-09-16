printf("Enter the value of n: ");
scanf("%d", &n);

printf("Prime numbers from 1 to %d are:\n", n);

for (i = 2; i <= n; i++) {
    isPrime = 1;

    for (j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1) {
        printf("%d ", i);
    }
}

return 0;printf("Enter number of elements: ");
scanf("%d", &n);

printf("Enter %d elements:\n", n);

for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

printf("Array elements are:\n");

for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}

return 0;