#include <stdio.h>
int main()
{
    int A[10];
    int i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(j=0;j<10;j=j+2)
    {
        printf("%d",A[j]);
    }
     return 0;
}
