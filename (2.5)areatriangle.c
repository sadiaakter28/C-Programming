#include<stdio.h>
int main()
{
    float a, b, c, p, area;
    printf("Enter lenght of three sides of a triangle:\n");
    scanf("%f %f %f", &a, &b, &c);
    p=(a+b+c)/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Area of the triangle: %.2f", area);
    return 0;
}
