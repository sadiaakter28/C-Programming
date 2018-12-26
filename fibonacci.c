#include<stdio.h>
int fibo(int i)
{
    if(i==0)
    {
        return 0;
    }
    else if(i==1)
    {
        return 1;
    }
    else
    {
        return fibo(i-1)+fibo(i-2);
    }
}
int main()
{
    int arr[100];
    int j,k,n;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
    scanf("%d",&arr[j]);
    }
    for(k=0;k<n;k++)
    {
        printf("%d\n",fibo(arr[k]));
    }
    return 0;
}
