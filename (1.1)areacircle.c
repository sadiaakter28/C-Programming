#include<stdio.h>
int main()
{
    float len, bre, rad, area_rec, pm, area_cir, cir;
    printf("Enter the length of a rectangle: ");
    scanf("%f", &len);
    printf("Enter the breadth of a rectangle: ");
    scanf("%f", &bre);
    area_rec=len*bre;
    pm=2*(len+bre);
    printf("Area of the rectangle is: %.2f\n", area_rec);
    printf("Perimeter of the rectangle is: %.2f\n", pm);
    printf("Enter the radius of a circle: ");
    scanf("%f", &rad);
    area_cir=3.1416*rad*rad;
    cir=2*3.1416*rad;
    printf("Area of the circle is: %.2f\n", area_cir);
    printf("Circumference of the circle is: %.2f\n", cir);
    return 0;
}
