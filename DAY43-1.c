#include <stdio.h>

int main()
{
    char str[100], temp;
    int i = 0, j, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }
    j = length - 1;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
    str[length] = '\0';

    printf("Reversed string: %s\n", str);

    return 0;
}
