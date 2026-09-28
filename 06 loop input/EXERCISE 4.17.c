#include <stdio.h>
#include <stdlib.h>

int main()
{
    int accountNumber;
    float oldCreditLimit, currentBalance, newCreditLimit;
    int i;

    // Process 3 customers
    for (i = 1; i <= 3; i++)
    {
        printf("\n--- Customer %d ---\n", i);

        // Input customer details
        printf("Enter account number: ");
        scanf("%d", &accountNumber);

        printf("Enter credit limit before recession: ");
        scanf("%f", &oldCreditLimit);

        printf("Enter current balance: ");
        scanf("%f", &currentBalance);

        // Calculate new credit limit (half of the old one)
        newCreditLimit = oldCreditLimit / 2;

        // Display results
        printf("\nAccount Number: %d\n", accountNumber);
        printf("New Credit Limit: %.2f\n", newCreditLimit);

        // Check if balance exceeds the new credit limit
        if (currentBalance > newCreditLimit)
        {
            printf("*** This customer has exceeded the new credit limit! ***\n");
        }
        else
        {
            printf("This customer is within the new credit limit.\n");
        }
    }

    return 0;
}
