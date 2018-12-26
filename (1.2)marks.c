#include<stdio.h>
int main(){
    float math, eng, phy, che, bio, total, avg;
    printf("Enter students marks in math: ");
    scanf("%f", &math);
    printf("Enter students marks in english: ");
    scanf("%f", &eng);
    printf("Enter students marks in physics: ");
    scanf("%f", &phy);
    printf("Enter students marks in chemistry: ");
    scanf("%f", &che);
    printf("Enter students marks in biology: ");
    scanf("%f", &bio);
    total=math+eng+phy+che+bio;
    avg=total/5;
    printf("The total marks obtained by the student is: %.2f \n", total);
    printf("The average marks obtained by the student is: %.2f \n", avg);
    return 0;
}
