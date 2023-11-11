/*
Adam Caulier p2304842     03/09/2023

Calcul de fractions

compiler avec $ gcc -W -Wall -std=c99 fraction.c -o fraction

*/

#include <stdio.h>

 


int  a  = 0;
int  b  = 0;
int num = 0 ;
int den = 0 ;

float PGCD = 1 ;






int main ()
{
  int t ;
  printf("Affichage  et simplification de fraction \n") ;
  printf("Entrer la fraction \n");
  scanf ("%i/%i", &num, &den) ;
  printf(" %i/%i \n", num, den);
  
  a = num ;
  b = den ;    // fin saisir   a / b
   
              


   
  while( den != 0){     //simplifier
     t = den ;
     den = num%den;
     num = t ;
  }
  PGCD = num ;

  printf("PGCD = %f  \n", PGCD);
  
  a = a/PGCD ;
  b = b/PGCD ;

  if ( b < 0 )
  {
   a = -a ;
   b = -b ;

  }

  printf("\n");

  printf(" a/PGCD = %i \n", a);
  printf(" b/PGCD = %i \n", b);
  
  printf("Fonction simplifiee = %i/%i \n" , a, b );
  printf("\n");
  return 0;

}