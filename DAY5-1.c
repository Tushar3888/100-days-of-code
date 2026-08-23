#include <stdio.h>
#include <math.h>
int main()
{
    float pri,rate,time;
    float si, ci;
    printf("Enter principal");
    scanf("%f",&pri);
    printf("Enter rate");
    scanf("%f",&rate);
    printf("Enter time");   
    scanf("%f",&time);
    si = (pri * rate * time) / 100;
    ci = pri * pow((1 + rate / 100), time) - pri;
    printf("Simple Interest = %f\n", si);
    printf("Compound Interest = %f\n", ci);
    return 0;
}
