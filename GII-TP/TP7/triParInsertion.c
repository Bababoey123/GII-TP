/*
Adam Caulier  24/10/2023

compiler avec  $ gcc gcc triParInsertion.c -W -Wall -std=c99 -loutils -L. -O3 -o triParInsertion


./triParInsertion

*/

#include"outils.h" 
#include<stdio.h>
#include<stdint.h>
#define TAILLE 10 

int64_t tab[TAILLE] = {0};
int64_t t = 0 ;
int64_t j = 0 ;
int64_t pmin = 0 ;

int main (){

 initialiser( TAILLE, tab, MONOTONE_DECR );
 afficherVecteur( TAILLE , tab);

 for ( int i = 0 ; i < TAILLE ; ++i){

   t = tab[i];
   j = i ;

   while ( j > 0 && t < tab[j-1]){
    tab[j] = tab[j-1];
    j = j- 1 ;
   }

   tab[j] = t ;
 } 
   
  printf("\n");
  afficherVecteur( TAILLE , tab);
  
  printf("\n");
  verifier( TAILLE, tab);
  printf("\n");
  return 0;
}