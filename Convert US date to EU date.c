#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int d, m, y, i, size;
    char str[25];
    gets(str);
    size = strlen(str);
    if (str[1] == '/' && str[3] == '/')
        printf("%c/%c/%c%c%c%c", str[2], str[0], str[4], str[5], str[6], str[7]);
    if (str[1] == '/' && str[4] == '/')
        printf("%c%c/%c/%c%c%c%c", str[2], str[3], str[0], str[5], str[6], str[7], str[8]);
    if (str[2] == '/' && str[4] == '/')
        printf("%c/%c%c/%c%c%c%c", str[3], str[0], str[1], str[5], str[6], str[7], str[8]);
    if (str[2] == '/' && str[5] == '/')
        printf("%c%c/%c%c/%c%c%c%c", str[3], str[4], str[0], str[1], str[6], str[7], str[8], str[9]);
    else
    {
        for (i = 0; i < size; i++)
        {
            if (isspace(str[i]) && isspace(str[i + 3]))
                printf("%c/", str[i + 1]);
            if (isspace(str[i]) && isspace(str[i + 4]))
                printf("%c%c/", str[i + 1], str[i + 2]);
        }
        if (str[0] == 'J' && str[1] == 'a')
            printf("1/");
        if (str[0] == 'F')
            printf("2/");
        if (str[0] == 'M' && str[2] == 'r')
            printf("3/");
        if (str[0] == 'A' && str[1] == 'p')
            printf("4/");
        if (str[0] == 'M' && str[2] == 'y')
            printf("5/");
        if (str[0] == 'J' && str[3] == 'e')
            printf("6/");
        if (str[0] == 'J' && str[2] == 'l')
            printf("7/");
        if (str[0] == 'A' && str[1] == 'u')
            printf("8/");
        if (str[0] == 'S')
            printf("9/");
        if (str[0] == 'O')
            printf("10/");
        if (str[0] == 'N')
            printf("11/");
        if (str[0] == 'D')
            printf("12/");
        for (i = 0; i < size; i++)
            if (str[i] == ',')
                printf("%c%c%c%c", str[i + 2], str[i + 3], str[i + 4], str[i + 5]);
    }
    return 0;
}