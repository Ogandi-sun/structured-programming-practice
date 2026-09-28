#include <stdio.h>
#include <stdlib.h>

int main()
{
    int productNumber, quantity;
    float price = 0.0, totalSales = 0.0;

    printf("Enter product number and quantity sold (enter 0 to finish):\n");

    while (1)
    {
        printf("\nProduct number (1-5, or 0 to quit): ");
        scanf("%d", &productNumber);

        if (productNumber == 0)   // Sentinel value to stop
            break;

        printf("Quantity sold: ");
        scanf("%d", &quantity);

        // Determine the price using switch
        switch (productNumber)
        {
            case 1:
                price = 2.98;
                break;
            case 2:
                price = 4.50;
                break;
            case 3:
                price = 9.98;
                break;
            case 4:
                price = 4.49;
                break;
            case 5:
                price = 6.87;
                break;
            default:
                printf("Invalid product number! Please enter 1-5.\n");
                continue;   // Skip this pair and ask again
        }

        // Add to total sales
        totalSales = totalSales + (price * quantity);
    }

    // Display the final total
    printf("\n--------------------------------\n");
    printf("Total retail value of all products sold: $%.2f\n", totalSales);

    return 0;
}
