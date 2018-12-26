#include <stdio.h>
int main()
{
    float km, meters, feet, inches, centimeters;
    printf("Enter the distance between two cities in km: ");
    scanf("%f", &km);
    meters=km*1000;
    feet=meters*3.28;
    inches=feet*12;
    centimeters=meters*100;

    printf("The distance between two cities in meters is: %.2f \n", meters);
    printf("The distance between two cities in feet is: %.2f \n", feet);
    printf("The distance between two cities in inches is: %.2f \n", inches);
    printf("The distance between two cities in centimeters is: %.2f \n", centimeters);
    return 0;
}
