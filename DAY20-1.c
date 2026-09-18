#include <stdio.h>
int main()
{
    int n,d,p=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        if(d%2!=0)
        {
            p=p*d;
        }
        n=n/10;
    }
    printf("The product of odd digits is %d\n",p);
    return 0;
}
