#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[25], str[50], arr[25];
    int ch1, ch2;
    int agent;
    int size, i, k = 0, j = 0;
    int count = 0;
    scanf("%s\n", name);
    scanf("%d\n", &agent);
    gets(str);
    size = strlen(str);
    for (i = 0; i < size; i++)
    {
        if (i == 0)
        {
            arr[j] = str[i];
            j++;
        }
        if (isspace(str[i]))
        {
            arr[j] = str[i + 1];
            j++;
        }
    }
    while (k < j)
    {
        ch1 = name[0];
        ch2 = arr[k];
        if (ch1 > ch2)
            count++;
        k++;
    }
    printf("%d", (count / agent) * 20 + 20);
    return 0;
}