/*
Adam Caulier p2304842     26/09/2023

Calcul de la somme des n premeirs enteirs

compiler avec $ gcc -W -Wall -std=c99 pow.c -o pow

*/

#include <stdio.h>

 


float x  = 2;
float e = 3 ;
float puissance = 1;





int main ()
{
  
  for ( int i = 1 ; i <=e ; ++ i)
   {
      puissance = puissance * x ;
   }
 
 printf("%f puissance %f = %f \n", x, e, puissance );
 return 0;

}