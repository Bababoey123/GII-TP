/*
Adam Caulier  24/10/2023

compiler avec  $ gcc gcc triRapide.c -W -Wall -std=c99 -loutils -L. -O3 -o triRapide


./triRapide

*/

#include"outils.h" 
#include<stdio.h>
#include<stdint.h>
#define TAILLE 10 

int64_t tab[TAILLE] = {0};
int64_t debut = 0 ;
int64_t fin = 0 ;
//int64_t pivot = 0 ;


void tri_Rapide( int tab[], int debut, int fin ){
  int64_t pivot =0;
  if ( debut < fin){
    pivot = partition(tab, debut, fin) ;
    tri_rapide(tab, gauche, pivot-1);
    tri_rapide(tab, pivot+1, fin);
    }
}
int partition( int tab[], int debut, int fin){
 int64_t clef = 0;
 int64_t i, j, temp = 0;

 clef=tab[fin] ;
 i =debut -1 ;
 j = fin ;

 while ( i<=j){

    i = i +1 ;
    while ( (i < fin) && (tab[i]< clef)){
        i = i +1 ;
    }
    while ( )
    {
        /* code */
    }
    
 }



}
int main (){

 initialiser( TAILLE, tab, MONOTONE_DECR );
 afficherVecteur( TAILLE , tab);

  return 0;
}