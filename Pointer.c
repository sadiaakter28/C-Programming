#include <stdio.h>
int main()
{
    int a=10,b=20;
    int *ptr;
    ptr=&a;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%x\n",&a);
    printf("%x\n",&b);
    printf("%d\n",&b);
    printf("%x\n",&ptr);
    printf("%x\n",*ptr);
    printf("%d\n",*ptr);
    return 0;
}
