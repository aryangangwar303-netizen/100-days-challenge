printf("Enter number of elements: ");
scanf("%d", &n);

printf("Enter array elements:\n");

for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    sum = sum + arr[i];
}

printf("Sum of array elements = %d", sum);

return 0;