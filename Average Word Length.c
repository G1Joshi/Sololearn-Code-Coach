#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int size, i;
    float tot;
    float let = 0.0;
    float wor = 1.0;
    gets(str);
    size = strlen(str);
    for (i = 0; i < size; i++)
    {
        if (isspace(str[i]))
            wor++;
        else if (isalpha(str[i]))
            let++;
    }
    tot = ceil(let / wor);
    printf("%d", (int)tot);
    return 0;
}