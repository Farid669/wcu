#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Iki kart sec (1-4): ");
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("Eyni kart olmaz!\n");
    }
    else if ((a == 1 && b == 2) || (a == 2 && b == 1))
    {
        printf("Uygundur! (A - A)\n");
    }
    else if ((a == 3 && b == 4) || (a == 4 && b == 3))
    {
        printf("Uygundur! (B - B)\n");
    }
    else
    {
        printf("Uygun deyil!\n");
    }

    return 0;
}
