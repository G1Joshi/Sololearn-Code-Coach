#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    char ch;
    int size, i;
    gets(str);
    size = strlen(str);
    char pig[20][80];
    char *pch;
    pch = strtok(str, " ");
    int n = 0;
    while (pch != NULL)
    {
        strcpy(pig[n++], pch);
        pch = strtok(NULL, " ");
    }
    for (int p = 0; p < n; p++)
        printf("%s%cay ", &pig[p][1], pig[p][0]);
    return 0;
}