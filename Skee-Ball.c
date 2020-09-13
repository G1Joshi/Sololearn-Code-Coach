#include <stdio.h>

int main()
{
    int pnt, tkt, tot;
    scanf("%d", &pnt);
    scanf("%d", &tkt);
    tot = pnt / 12;
    if (tot >= tkt)
        printf("Buy it!");
    else
        printf("Try again");
    return 0;
}