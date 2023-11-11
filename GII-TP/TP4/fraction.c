/*
Adam Caulier p2304842     03/09/2023

Calcul de fractions

compiler avec $ gcc -W -Wall -std=c99 fraction.c -o fraction

*/

#include <stdio.h>

 


int  a  = 0;
int  b  = 0;






int main ()
{
  printf("Affichage de fraction \n") ;
  printf("Entrer la fraction \n");
  scanf ("%i/%i", &a, &b) ;
  printf(" %i/%i \n", a, b);
 
  return 0;

}