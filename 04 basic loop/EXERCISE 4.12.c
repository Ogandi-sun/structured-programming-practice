#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, isPrime;

    printf("Prime numbers from 1 to 100 are:\n");

    for (i = 2; i <= 100; i++)   // 1 is not a prime number
    {
        isPrime = 1;             // assume the number is prime

        // Check if i is divisible by any number from 2 to i/2
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;     // not a prime number
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
