#include<stdio.h>
int main()
{
    int cost,selling,profit,loss;
    printf("Enter the cost price: ");
    scanf("%d",&cost);
    printf("Enter the selling price: ");
    scanf("%d",&selling);
    if(selling>cost)
    {
        profit=selling-cost;
        printf("The seller has made a profit\n");
        printf("Profit=%d",profit);
    }
    else
    {
        loss=cost-selling;
        printf("The seller has incurred loss\n");
        printf("Loss=%d",loss);
    }
}
