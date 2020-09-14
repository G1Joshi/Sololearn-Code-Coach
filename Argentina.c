#include <stdio.h>

int main()
{
    int peso, dol, cents;
    scanf("%d %d", &peso, &dol);
    cents = peso / 50;
    if (cents < dol)
        printf("Pesos");
    else if (cents > dol)
        printf("Dollars");
    return 0;
}