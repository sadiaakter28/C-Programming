#include<stdio.h>
int fib(int i)
{
if (i==0)
    return 0;
if (i==1)
    return 1;
return fib(i-1)+fib(i-2);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("Given number: %d\n",n);
    for(i=0;i<n;i++)
    {
        printf("Fibo(%d):%d\t",i,fib(i));
    }
    return 0;
}
