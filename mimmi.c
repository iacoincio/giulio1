#include  <stdio.h>

int main()
{
    char x = 'a';
    char y = 'b';
    int a = 42;
    double d = 6765544545555;
    float f = 4.222222;

    printf("x era: %c\n", x);
    printf("y era: %c\n", y);
    printf("a era: %d\n", a);
    printf("inserisci due caratteri \n");
    scanf ("%c %c", &x, &y);
    printf("x é diventato: %c\n", x);
    printf("y é diventato: %c\n", y);
    printf("ao\n");
}