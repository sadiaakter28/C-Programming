#include<stdio.h>
int main()
{
    int basic, rent, dearness, gross;
    printf("Enter Shomi's basic salary: ");
    scanf("%d", &basic);
    rent=0.2*basic;
    dearness=0.4*basic;
    gross=rent+dearness+basic;
    printf("Shomi's gross salary is: %d", gross);
    return 0;

    }
