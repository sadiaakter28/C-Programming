#include <stdio.h>
int main ()
{
    int i=0;
    while (i<5)
    {
        i++;
        continue;
        printf("Do you see me\n");
        if(i==10)
        {
            printf("thanks");
            break;

        }
    }
    printf("There is nothing to print");
    return 0;

}

