#include<stdio.h>
int main()
{
    int num,a,b,sum;
    printf("Enter a five digit number: ");
    scanf("%d", &num);
    b=num%10;

    a=(num/10000)%10;

    sum=a+b;
    printf("Sum of first and last digit of the number is: %d", sum);
    return 0;

}
