#include <stdio.h>

int main ()
{

    int x;
    int y;
    int z=1;

    printf("scrivi una base e un esponente\n");
    scanf("%d %d", &x, &y);

    while(y>0)
    {
        x = x * 1;
        y = y - 1;
    }
    printf("%d\n", z);
}
