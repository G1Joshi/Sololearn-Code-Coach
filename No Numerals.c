#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50];
    int size, i;
    gets(str);
    size = strlen(str);
    for (i = 0; i < size; i++)
    {
        if (islower(str[i]) || isupper(str[i]) || isspace(str[i]))
            printf("%c", str[i]);
        if (str[i] == '1' && str[i + 1] == '0')
        {
            printf("ten");
            i++;
            continue;
        }
        if (isdigit(str[i]))
            switch (str[i])
            {
            case '0':
                printf("zero");
                break;
            case '1':
                printf("one");
                break;
            case '2':
                printf("two");
                break;
            case '3':
                printf("three");
                break;
            case '4':
                printf("four");
                break;
            case '5':
                printf("five");
                break;
            case '6':
                printf("six");
                break;
            case '7':
                printf("seven");
                break;
            case '8':
                printf("eight");
                break;
            case '9':
                printf("nine");
                break;
            }
    }
    return 0;
}