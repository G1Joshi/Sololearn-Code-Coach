#include <stdio.h>
#include <string.h>

void reverse(char *x, int begin, int end)
{
    char c;
    if (begin >= end)
        return;
    c = *(x + begin);
    *(x + begin) = *(x + end);
    *(x + end) = c;
    reverse(x, ++begin, --end);
}

int main()
{
    char a[100];
    scanf("%s", a);
    reverse(a, 0, strlen(a) - 1);
    printf(a);
    return 0;
}