#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;           // i = the number whose factorial we want
                        // j = used to multiply numbers from 1 to i
    long factorial;     // Stores the result of the factorial
                        // (long is used because factorial grows quickly)

    // Print the table header
    printf("n\tn!\n");
    printf("----------------\n");

    // Outer loop: go from 1 to 5
    for (i = 1; i <= 5; i++)
    {
        factorial = 1;  // Start each factorial calculation from 1

        // Inner loop: multiply 1 × 2 × 3 × ... × i
        for (j = 1; j <= i; j++)
        {
            factorial = factorial * j;  // Keep multiplying
        }

        // Print the number and its factorial
        printf("%d\t%ld\n", i, factorial);
    }

    return 0;
}
