#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char pass[25];
    int i, size;
    int a, b, c;
    a = b = c = 0;
    scanf("%s", pass);
    size = strlen(pass);
    if (size >= 7)
        a++;
    for (i = 0; i < size; i++)
    {
        if (isdigit(pass[i]))
            b++;
        if (ispunct(pass[i]))
            c++;
    }
    if (a > 0 && b > 1 && c > 1)
        printf("Strong");
    else
        printf("Weak");
    return 0;
}