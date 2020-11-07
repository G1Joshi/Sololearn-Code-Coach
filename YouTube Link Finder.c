#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int size, i, j;
    scanf("%s", str);
    size = strlen(str);
    for (i = size - 1; i >= 0; i--)
    {
        if (str[i] == '/' || str[i] == '=')
        {
            i++;
            break;
        }
    }
    for (j = i; j < size; j++)
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}