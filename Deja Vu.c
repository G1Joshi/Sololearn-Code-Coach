#include <stdio.h>
#include <string.h>

int main()
{
    char str[25];
    int size, i, j;
    int count = 0;
    scanf("%s", str);
    size = strlen(str);
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            if (str[i] == str[j] && i != j)
                count++;
    if (count != 0)
        printf("Deja Vu");
    else
        printf("Unique");
    return 0;
}