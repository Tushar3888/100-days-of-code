#include <stdio.h>
int main()
{
    int n1,n2;
    char op;
    printf("enter 1st number\n");
    scanf("%d",&n1);
    printf("enter operator(+,-,*,/,%%):");
    scanf(" %c",&op);
    printf("enter 2nd number\n");
    scanf("%d",&n2);
    switch(op)
    {
        case '+':
            printf("%d + %d = %d\n",n1,n2,n1+n2);
            break;
        case '-':
            printf("%d - %d = %d\n",n1,n2,n1-n2);
            break;
        case '*':
            printf("%d * %d = %d\n",n1,n2,n1*n2);
            break;
        case '/':
            if(n2!=0)
                printf("%d / %d = %.2f\n",n1,n2,(float)n1/n2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if(n2!=0)
                printf("%d %% %d = %d\n",n1,n2,n1%n2);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator. Please use +, -, *, /, or %%.\n");
    }
}
