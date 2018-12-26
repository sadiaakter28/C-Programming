#include<stdio.h>

int res(int *i,int j)
{
    printf("4. I=%d J=%d \n",*i,j);
    j++;
    (*i)--;
    printf("3. I=%d J=%d \n",*i,j);
    return *i+j;
}

int main()
{
    int a=5,b=4,c=0;
    printf("1. A=%d B=%d \n",a,b);
    c=res(&a,b);
    printf("4. A=%d B=%d \n",a,b);
    printf("5. C=%d \n",++c);
    return 0;
}
