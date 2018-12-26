#include<stdio.h>
int main()
{
    int ria,pia,dia;
    printf("Enter age of Ria: ");
    scanf("%d",&ria);
    printf("Enter age of Pia: ");
    scanf("%d",&pia);
    printf("Enter age of Dia: ");
    scanf("%d",&dia);

    if(ria<pia&&ria<dia)
    {
        printf("Ria is the youngest among three");
    }
    else if(pia<dia)
    {
        printf("Pia is the youngest among three");
    }
    else
    {
        printf("Dia is the youngest among three");
    }
}
