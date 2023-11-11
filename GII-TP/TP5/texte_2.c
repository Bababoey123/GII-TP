/*
Adam Caulier p2304842     10/10/2023

Ce programme dessine des carrees  avec le  symbole #

compiler avec $ gcc -W -Wall -std=c99 compter_voyelles.c -o compter_voyelles

*/

#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define TAILLE 28

char symbol = '#';
int n= 0 ;
int main ()
{
  
  printf("Saisir un nombre \n");
  scanf( "%d", &n);  
  
  for ( int i = 0; i <= n ; ++i )
  {
    if ( i ==0 || i == n) {
      for ( int i = 0; i < n + 1 ; ++i )
      {
      printf( "#");
      }
    }

    else  {
      for ( int j = 0; j <= n ; ++j )
      {
         if ( j == 0 || j == n) {
            printf( "#");
          }
         else {
          printf(" ");
           }
    
      } 
    }

    printf( " \n");
    
  }
  
  
  
  return 0;

}