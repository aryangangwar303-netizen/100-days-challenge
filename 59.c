printf("Enter number of elements: ");
scanf("%d", &n);

printf("Enter array elements:\n");

for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);

    if (arr[i] % 2 == 0)
        even++;
    else
        odd++;
}

printf("Even numbers = %d\n", even);
printf("Odd numbers = %d", odd);

return 0;