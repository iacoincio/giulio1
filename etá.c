#include <stdio.h>

int main ()
{
int a;


printf("inserire l'etá dell'utente\n");
scanf("%d", &a);

if (a >= 18)
{
    printf("l'utente é maggiorenne\n");
}
else 
{
    printf("l'utente é minorenne");
}
}