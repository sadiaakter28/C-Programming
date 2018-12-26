#include <stdio.h>
int main()
{
    int A[5]={2,5,7,6,9}, i;
    for(i=0;i<5;i++)
    {
        A[i]=A[i]*i;
    }
    printf("Hello\n");
    for(i=0;i<5;i++)
    {
        printf("AA[%d]=%d \n", i,A[i]);
        if(i%3==0)
        {
            printf("AAA[%d]=%d \n", i,A[i]);
            continue;
            printf("Hello World hey\n");
        }
        printf("Hello World\n");
    }
    return 0;
}
