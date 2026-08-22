#include<stdio.h>
int main()
{
    float radius,area,cir;
    printf("Enter radius of circle");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    cir=2*3.14*radius;
    printf("Area=%.2f\n",area);
    printf("Circumference=%.2f\n",cir);
    return 0;
}
