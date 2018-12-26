#include<stdio.h>
int main()
{
    int inches, feet, fathoms;
    fathoms=7;

    printf("Enter its depth at sea: \n");
    scanf("%d", &fathoms);

    feet=6*fathoms;
    inches=12*feet;
    printf("Fathoms: %d \n", fathoms);
    printf("Feet: %d \n", feet);
    printf("Inches: %d \n", inches);

}
