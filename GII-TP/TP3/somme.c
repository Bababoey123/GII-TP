/*
Adam Caulier p2304842     26/09/2023

Calcul de la somme des n premeirs enteirs

compiler avec $ gcc -W -Wall -std=c99 somme.c -o somme

*/

#include <stdio.h>

int n = 0 ;
int somme = 0 ;


int main ()
{
  printf("Somme de n premiers entiers \n");
  printf(" n = ? \n");
  scanf("%i", &n);

  for ( int i = 0 ; i <= n ; ++ i)
   {
    somme = somme + i ;
   }
 printf("Somme = %i", somme);
 return 0;

}