#include <stdio.h>

int main()
{
    int h, m;
    char t[3];
    scanf("%d:%d %s", &h, &m, t);
    if (strcmp(t, "PM") == 0 && h != 12)
        h += 12;
    if (strcmp(t, "AM") == 0 && h == 12)
        h = 0;
    printf("%02d:%02d", h, m);
    return 0;
}