/*
Adam Caulier p2304842     10/10/2023

Compteur de voyelles

compiler avec $ gcc -W -Wall -std=c99 compter_voyelles.c -o compter_voyelles

*/

#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define TAILLE 28



char txt[TAILLE] ;

int longeurchaine = 0;
int nbvoyelles = 0 ;


int main ()
{
  
  printf("Saisir un texte \n");
  //scanf( "%[^\n] ", txt);  // prend une serie de 27 chareacteres sans prendre en compte le \n 
  fgets ( txt, 28, stdin);
  longeurchaine = strlen(txt);
  
  // printf( " %i\n", longeurchaine );
  printf( " \n");
  for ( int i = 0; i < longeurchaine ; ++i )
  {
    
    if ( txt[i] == 'a' || txt[i] == 'e' || txt[i] == 'i' || txt[i] == 'o' ||  txt[i] == 'u' || txt[i] == 'y' || txt[i] == 'A' || txt[i] == 'E' || txt[i] == 'I' || txt[i] == 'O' ||  txt[i] == 'U' || txt[i] == 'Y' ){
       ++ nbvoyelles ;
      //printf( " %i\n", nbvoyelles );
    }

  }
  printf( " \n");
  printf( " %i\n", nbvoyelles );
  
  return 0;

}