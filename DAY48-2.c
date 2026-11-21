#include <stdio.h>
#include <string.h>

int main() 
{
    char str[200];
    int i, start = 0, end, j;
    char temp;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') 
        {
            end = i - 1;
            for (j = start; j < end; j++, end--)
             {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;
            }

            if (str[i] == '\0')
                break;

            start = i + 1;
        }
    }

    printf("Sentence after reversing each word:\n%s\n", str);

    return 0;
}
