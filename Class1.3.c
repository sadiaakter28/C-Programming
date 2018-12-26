#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,div;
    a=40;
    b=20;

    sum=0;
    sub=0;
    mul=0;
    div=0;

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    printf("%d \n", sum);
    printf("%d \n", sub);
    printf("%d \n", mul);
    printf("%d \n", div);
}
