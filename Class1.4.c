#include<stdio.h>
int main()
{
    int a,b,c;
    char ch;

    printf("Enter two Number: \n");
    scanf("%d \n", &a, &b);
    printf("Enter the Operation: \n");
    scanf("%c \n", &ch);

    switch(ch)
    {
    case'+':
        c=a+b;
        printf("The summation of two number is: %d \n", c);
        break;
    case'-':
        c=a-b;
        printf("The subtraction of two number is: %d \n", c);
        break;
    case'*':
        c=a*b;
        printf("The Multiplication of two number is: %d \n", c);
        break;
    case'/':
        c=a/b;
        printf("The Division of two number is: %d \n", c);
        break;
    default:
        printf("Invalid Character \n");
    }

    printf("None of the above is correct \n");


    return 0;
}
