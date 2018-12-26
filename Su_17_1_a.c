#include <stdio.h>
int main ()
{
    char ch='A';
    printf("%c %d\n", ch, ch);
    char nch=++ch;
    printf("%c %d\n", nch, nch);
    printf("%c %d\n", ch, ch);
    return 0;

}
