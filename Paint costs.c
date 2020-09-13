#include <stdio.h>
#include <math.h>

int main()
{
    int num, fin;
    float cost, tot, tax;
    scanf("%d", &num);
    cost = (5 * num) + 40;
    tax = 0.1 * cost;
    tot = cost + tax;
    fin = round(tot);
    printf("%d", fin);
    return 0;
}