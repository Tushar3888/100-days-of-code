#include <stdio.h>
#include <string.h>

int main() 
{
    char str[200];
    int i = 0, start, end;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        {
            i++;
            continue;
        }
        start = i;
        while (str[i] != ' ' &&
               str[i] != '\n' &&
               str[i] != '\0') 
            {
            i++;
        }

        end = i - 1;
        while (start < end) 
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }
    }

    printf("Sentence after reversing each word: %s", str);

    return 0;
}
