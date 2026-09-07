#include <stdio.h>
int main()
{
    int i,n,pr=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        pr=pr*i;
    }
    printf("Product of even numbers from 1 to %d is %d\n",n,pr);
    return 0;
}
