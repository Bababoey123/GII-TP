/*
Adam Caulier p2304842     26/09/2023

Calcul de la somme des n premeirs enteirs

compiler avec $ gcc -W -Wall -std=c99 -lm expo_fonction.c -o expo_fonctio

*/

#include <stdio.h>
#include<math.h>
 


float x  = 0;
int N = 10;
float expo = 1 ;


float exponentielle ( float x){

  float e = 1 ;
  float facti = 1;
  int puissance = 1 ;

  for ( int i = 1 ; i <=N ; ++ i)
   {
        for ( int j = 1 ; j <= i; ++ j)
        {
            facti = facti * j ;
        }


        for ( int a= 1 ; a <=i ; ++ a)
        {
            puissance = puissance * x ;
        }

     e = e + puissance/facti ;
     facti = 1;
     puissance = 1 ;
   }

   return e ;

}

int main ()
{
  printf("aproximation fonction exponenetielle \n");
  printf(" x = ? \n");
  scanf("%f", &x);
  printf("saisir le degrre de precision N \n");
  printf(" N = ? \n");
  scanf("%i", &N);

 
 

expo = exponentielle ( x );
 printf("e = %f \n", expo);
 return 0;

}