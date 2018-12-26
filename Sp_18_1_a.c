#include <stdio.h>
int main ()
{
    int x=5, y=10, z=15;
    printf("1. x = %d\n", x*=5);
    y-= (x--);
    printf("2. x = %d y = %d\n", x, y);
    z=((++x)-(y--));
    printf("3. z = %d\n", z--);
    printf("4. z = %d\n", z);
    printf("5. y = %d\n", y);
    printf("6. x = %d\n", x);
    return 0;
}


