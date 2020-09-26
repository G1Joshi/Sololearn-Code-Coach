#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50];
    int size, i;
    gets(str);
    size = strlen(str);
    for (i = size - 1; i > -1; i--)
        if (isupper(str[i]) || islower(str[i]) || isspace(str[i]))
            printf("%c", str[i]);
    return 0;
}