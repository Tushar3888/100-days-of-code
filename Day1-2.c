#include <stdio.h>
int main()
{
float n1,n2;
printf("Enter two numbers");
scanf("%f%f",&n1,&n2);
printf("Sum=%.2f\n",n1+n2);
printf("Difference=%.2f\n",n1-n2);
printf("Product=%.2f\n",n1*n2);
if(n2!=0)
{
    printf("Quotient=%.2f\n",n1/n2);
}
else
{
    printf("Quotient=cannot divide by zero\n");
}
return 0;
}