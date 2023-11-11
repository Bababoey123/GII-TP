/*
Adam Caulier  24/10/2023

compiler avec  $ gcc gcc triParSelection.c -W -Wall -std=c99 -loutils -L. -O3 -o triParSelection


./triParSelection

*/

#include"outils.h" 
#include<stdio.h>
#include<stdint.h>
#define TAILLE 10 

int64_t tab[TAILLE] = {0};



int64_t x = 0 ;
int64_t tmp = 0 ;
int64_t pmin = 0 ;


int main (){

 initialiser( TAILLE, tab, ALEATOIRE );
 afficherVecteur( TAILLE , tab);
    
    for ( int debut = 0 ; debut < TAILLE-1  ; ++debut){
        pmin = debut ;

          for ( int i = debut + 1 ; i < TAILLE ; ++i)
          {

             if ( tab[pmin] > tab[i])
             {
               pmin = i;
             }

          }

        tmp = tab[debut];
        tab[debut]=tab[pmin];
        tab[pmin]= tmp;
    }
  printf("\n");
  afficherVecteur( TAILLE , tab);

  printf("\n");
  return 0;
}