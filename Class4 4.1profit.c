#include<stdio.h>
int main()
{
    float selling, profit, cost, cost1;
    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &selling);
    printf("Enter the total profit earned: ");
    scanf("%f", &profit);
    cost=selling-profit;
    cost1=cost/15;
    printf("Total cost price of 15 items is %.2f\n", cost);
    printf("Cost price of one item is %.2f", cost1);
    return 0;
    }
