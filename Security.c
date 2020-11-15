#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int size, i;
    int a, b, c;
    gets(str);
    size = strlen(str);
    for (i = 0; i < size; i++)
    {
        if (str[i] == 'G')
            a = i;
        if (str[i] == '$')
            b = i;
        if (str[i] == 'T')
            c = i;
    }
    if ((a < b && b < c) || (c < b && b < a))
        printf("ALARM");
    else
        printf("quiet");
    return 0;
}