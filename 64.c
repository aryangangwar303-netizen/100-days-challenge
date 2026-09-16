0printf("Enter number of elements in first array: ");
scanf("%d", &n1);

printf("Enter elements of first array:\n");
for (i = 0; i < n1; i++) {
    scanf("%d", &a[i]);
}

printf("Enter number of elements in second array: ");
scanf("%d", &n2);

printf("Enter elements of second array:\n");
for (i = 0; i < n2; i++) {
    scanf("%d", &b[i]);
}

// Copy first array
for (i = 0; i < n1; i++) {
    merged[i] = a[i];
}

// Copy second array
for (i = 0; i < n2; i++) {
    merged[n1 + i] = b[i];
}

printf("Merged array:\n");
for (i = 0; i < n1 + n2; i++) {
    printf("%d ", merged[i]);
}

return 0;