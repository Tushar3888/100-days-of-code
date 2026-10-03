#include <stdio.h>
int main()
{
    char str[100];
    int i=0, count=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            count++;
        }
        i++;
    }
    printf("The number of words in the string is: %d\n", count+1);
    return 0;
}
