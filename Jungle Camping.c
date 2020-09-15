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
        if (isspace(str[i]))
            printf(" ");
        if (str[i] == 'G')
            printf("Lion");
        if (str[i] == 'R')
            printf("Tiger");
        if (str[i] == 'C')
            printf("Bird");
        if (str[i] == 'S')
            printf("Snake");
    }
    return 0;
}