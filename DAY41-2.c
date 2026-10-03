#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str),stdin);
    ptintf("Characters in the string are:\n");
    while(str[i]!='\0')
    {
        printf("%c\n",str[i]);
        i++;
    }
    return 0;

}
