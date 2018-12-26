#include <stdio.h>
int main ()
{
    int i;
    for(i=5; i>=0; i--)
    {
        if(i%3==0)
        {
            printf("\nStart");
        }
        else
        {
            continue;
            printf("\n End");

        }
        printf("\nIndex is %d",i);
    }
    return 0;
}




