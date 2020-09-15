#include <stdio.h>

int main()
{
    int num, sell;
    scanf("%d", &num);
    sell = num * 3000000;
    if (sell > 21000000)
        printf("Profit");
    else if (sell < 21000000)
        printf("Loss");
    else
        printf("Broke Even");
    return 0;
}