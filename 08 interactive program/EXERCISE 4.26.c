#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pi = 0.0;
    int terms;
    int i;
    int sign = 1;          // starts positive for the first term

    printf("Terms\t\tApproximate value of pi\n");
    printf("----------------------------------------\n");

    // Calculate using many terms and show progress
    for (terms = 1; terms <= 100000; terms++)
    {
        // Add the next term: 4 / (2*terms - 1) with alternating sign
        pi = pi + sign * 4.0 / (2 * terms - 1);
        sign = -sign;      // flip the sign for the next term

        // Print every term for the first 20, then less frequently
        if (terms <= 20 || terms % 10000 == 0)
        {
            printf("%d\t\t%.10f\n", terms, pi);
        }
    }

    return 0;
}
