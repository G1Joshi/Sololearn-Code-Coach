#include <stdio.h>
#include <math.h>

int main()
{
    int h, dol;
    float bill;
    scanf("%d", &h);
    bill = (2.0 / h) * 100;
    dol = ceil(bill);
    printf("%d", dol);
    return 0;
}