/*
Adam Caulier p2304842     26/09/2023

Calcul de la somme des n premeirs enteirs

compiler avec $ gcc -W -Wall -std=c99 -lm expo.c -o expo

*/

#include <stdio.h>
#include<math.h>
 


float x  = 0;
float e = 1 ;
float facti = 1;
int N = 0 



int main ()
{
  printf("aproximation fonction exponenetielle \n");
  printf(" x = ? \n");
  scanf("%f", &x);
  printf("saisir le degrre de precision N \n")
  printf(" N = ? \n");
  scanf("%f", &x);

 
  for ( int i = 1 ; i <=N ; ++ i)
   {
       for ( int j = 1 ; j <= i; ++ j)
        {
          facti = facti * j ;
        }

     e = e + pow(x, i)/facti ;
     facti = 1;
   }
 
 printf("e = %f \n", e);
 return 0;

}