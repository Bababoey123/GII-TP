/*
Adam Caulier p2304842     03/09/2023

Calcul de la suite de fibonacci 
compiler avec $ gcc -W -Wall -std=c99 fibonacci.c -o fibo

*/

#include <stdio.h>
#define TAILLE 20

int tab[TAILLE] = {0};
int x ; 
int trouve;
int i, pmin, pmax ;

int main ()
{
  printf("Recherche binaire d'elements dans un tableau");
  printf("Veuillew saisir un nombre x a rechercher :");
  scanf("%i", &x);

  for (int i = 0 ; i < TAILLE ; i++){  // remplissage avec la suite de fibonacci 

    if ( i == 0){
        tab[i]=0;
    }
    if ( i == 1){
        tab[i]=1;
    }
    else{
        tab[i]=tab[i-1]+tab[i-2];
    }
  }
  // affichage du tableau
  for (int i = 0 ; i < TAILLE ; i++){

    printf("%3i", tab[i]);
    printf("\n");
  }

  // recherche binaire de x 
  trouve = 0;
  pmin = 0 ;
  pmax = TAILLE - 1;
  while(pmin <= pmax ){

    i=(pmin+pmax)/2;

    if (tab[i]==x){
        trouve = 1 ;
        break;
    }
    if (tab[i]<x){
        pmin = i + 1 ;
        
    }
    if (tab[i]>x){
        pmax = i - 1 ;
    }

  }
  if(trouve)
  {
    printf("%i se trouve en position %i", x, i);
  }
  else 
  {
   printf("%i ne se trouve pas dans le tableau", x);

  }
  

  printf("\n");
  return 0;

}