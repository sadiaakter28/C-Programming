#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    float squareRoot;
    scanf("%d",&num);
    squareRoot = sqrt(num);
    printf("Square root of %d =  %.2f", num, squareRoot);

    return 0;
}
