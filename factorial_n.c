#include<stdio.h>
int fact(int i)
{
    if(i<=1)
    {
        return 1;
    }
    else
    {
        return i*fact(i-1);
    }
}
int main()
{
    int arr[10];
    int j,k;
    for(j=0;j<10;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(k=0;k<10;k++)
    {
        printf("Factorial of %d is %d\n",arr[k],fact(arr[k]));
    }
    return 0;
}
