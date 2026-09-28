#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mortgageAmount, interestRate, totalInterest, totalPayable, monthlyPayment;
    int termYears;

    while (1)   // loop for multiple customers
    {
        // Input
        printf("Enter mortgage amount in dollars: ");
        scanf("%f", &mortgageAmount);

        // Allow user to quit by entering a negative amount
        if (mortgageAmount < 0)
            break;

        printf("Enter Mortgage term (in years): ");
        scanf("%d", &termYears);

        printf("Enter Interest rate: ");
        scanf("%f", &interestRate);

        // Calculations (simple interest)
        // Interest rate is entered as percentage (e.g. 5 for 5%)
        totalInterest = mortgageAmount * (interestRate / 100) * termYears;
        totalPayable  = mortgageAmount + totalInterest;
        monthlyPayment = totalPayable / (termYears * 12);

        // Output
        printf("The Monthly Payable Interest is: %.2f\n\n", monthlyPayment);
    }

    return 0;
}

