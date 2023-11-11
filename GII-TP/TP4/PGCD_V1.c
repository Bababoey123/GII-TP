/*
Adam Caulier p2304842     03/09/2023

Calcul de fractions

compiler avec $ gcc -W -Wall -std=c99 fraction.c -o fraction

*/

#include <stdio.h>

 


int  a  = 0;
int  b  = 0;
float PGCD = 1 ;






int main ()
{
  int t = 1 ;
  printf("Affichage de fraction \n") ;
  printf("Entrer la fraction \n");
  scanf ("%i/%i", &a, &b) ;
  printf(" %i/%i \n", a, b);

  while( b != 0){
     t = b ;
     b = a%b ;
     a = t ;
  }
  PGCD = a ;

  printf("PGCD = %f  \n", PGCD);

  return 0;

}