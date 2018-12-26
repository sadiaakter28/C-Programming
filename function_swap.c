#include<stdio.h>
void swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("After swap a=%d b=%d",a,b);
    return 0;
}
