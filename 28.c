printf("Enter n: ");
scanf("%d", &n);

for (i = 2; i <= n; i += 2) {
    product = product * i;
}

printf("Product = %d", product);

return 0;