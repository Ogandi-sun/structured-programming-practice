#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int sum, product, smallest, largest;
    float average;

    // Input three different integers
    printf("Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate sum, average and product
    sum = num1 + num2 + num3;
    average = (float)sum / 3;          // cast to float for decimal average
    product = num1 * num2 * num3;

    // Find the smallest (using only single-selection if)
    smallest = num1;
    if (num2 < smallest)
        smallest = num2;
    if (num3 < smallest)
        smallest = num3;

    // Find the largest (using only single-selection if)
    largest = num1;
    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;

    // Display results
    printf("Sum is %d\n", sum);
    printf("Average is %.0f\n", average);   // %.0f to match the sample (18)
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

    return 0;
}
