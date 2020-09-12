#include <stdio.h>

int main()
{
    int num, i;
    scanf("%d", &num);
    if (num > 10)
        printf("High Five");
    else if (num < 1)
        printf("shh");
    else
        for (i = 1; i <= num; i++)
            printf("Ra!");
    return 0;
}