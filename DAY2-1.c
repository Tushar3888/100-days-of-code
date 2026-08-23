#include <stdio.h>
int main(void)
{
    int l=0,b=0;
    printf("Enter length and breadth");
    scanf("%d %d",&l,&b);
    printf("Area=%d",(l*b));
    printf("Perimeter=%d",(2*(l+b)));
}
