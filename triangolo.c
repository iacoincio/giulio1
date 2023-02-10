#include <stdio.h>

int main ()
{
int a;    
int b; 
int c;

printf ("inserisci due interi\n");
scanf("%d %d %d", &a , &b , &c); 

if(a+b > c && b+c > a && a+c > b)
{
printf("sono lati di un triangolo\n"); 
    
if (a == b  &&  b == c)
{
 printf("triangolo equilatero\n");

}
else if ( (a == b && a != c) || ( b == c && a != c) || (a == c && a != b)
{
printf("é un triangolo isoscele\n"); 
}
else if ( a != b && a != c && b != c)
{
printf("é un triangolo scaleno\n");
}

else
{
printf("non sono lati di un triangolo\n");
}

}