#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    float sum, product, difference, quotient;
    int remainder;   // remainder is still an integer concept

    // Ask the user for two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform the calculations
    sum        = num1 + num2;
    product    = num1 * num2;
    difference = num1 - num2;
    quotient   = num1 / num2;          // now gives decimals
    remainder  = (int)num1 % (int)num2; // convert to int for modulus

    // Display the results
    printf("\n--- Results ---\n");
    printf("Sum         = %.2f\n", sum);
    printf("Product     = %.2f\n", product);
    printf("Difference  = %.2f\n", difference);
    printf("Quotient    = %.2f\n", quotient);
    printf("Remainder   = %d\n", remainder);

    return 0;
}

