/*
Adam Caulier p2304842     10/10/2023

Ce programme dessine des triangles  avec le  symbole #

compiler avec $ gcc -W -Wall -std=c99 compter_voyelles.c -o compter_voyelles

*/

#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define TAILLE 28

char symbol = '#';
int n= 0 ;
int x = 0 ;
int main ()
{
  
  printf("Saisir un nombre \n");
  scanf( "%d", &n);  
  
  for ( int i = 0; i <= n ; ++i )
  {
    for (int j = 0 ; j <= x ; ++j){

      printf("#");
      
    }
    ++ x ;

    printf( " \n");
    
  }
  
  
  
  return 0;

}