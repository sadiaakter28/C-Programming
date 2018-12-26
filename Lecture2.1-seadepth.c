#include <stdio.h>
int main()
{
    int inches, feet, fathoms;

    fathoms=7;
    feet=6*fathoms;
    inches=12*feet;

    printf("Its deapth at sea: \n");
    printf(" %d fathoms \n", fathoms);
    printf(" %d feet \n", feet);
    printf(" %d inches \n", inches);

    return 0;
}
