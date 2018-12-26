#include<stdio.h>
int main()
{
    char a[1000],c;
    int i,x=0;
    gets(a);
    scanf("%c",&c);
    for(i=0;a[i]!= '\0';i++)
    {
       if (a[i]==c)
        x++;
    }
    printf("%d\n",x);
    return 0;
}
