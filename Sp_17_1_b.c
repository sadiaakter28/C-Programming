#include <stdio.h>
int main ()
{
    int x=3,y=12,z=15;
    printf("1. x= %d\n",++x);
    y+=(x+1);
    printf("2. x= %d y= %d\n",x,y);
    z=(x--)+(--y);
    printf("3. z= %d\n",z++);
    printf("4. z= %d\n",z);
    return 0;
}
