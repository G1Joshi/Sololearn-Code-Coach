#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if (num < 5)
        printf("I got this!");
    else if (num >= 5 && num <= 10)
        printf("Help me Batman");
    else if (num > 10)
        printf("Good Luck out there!");
    return 0;
}