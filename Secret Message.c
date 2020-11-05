#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[25];
    char ch;
    int size, i;
    gets(str);
    size = strlen(str);
    for (i = 0; i < size; i++)
    {
        if (isspace(str[i]))
            printf(" ");
        else if (islower(str[i]))
        {
            ch = 'z' - str[i] + 'a';
            putchar(ch);
        }
        else if (isupper(str[i]))
        {
            ch = 'Z' - str[i] + 'A';
            if (isupper(ch))
                ch = ch + 32;
            putchar(ch);
        }
    }
    return 0;
}