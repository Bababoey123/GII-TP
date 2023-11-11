/*
Adam Caulier p2304842     10/10/2023

Bug dnas le programme depassement

compiler avec $ gcc -W -Wall -std=c99 depassement.c -o depassement

*/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define TAILLE 8




 int main()
 {
 char texte[]="Vous avez saisi le mot : ";
 char mot[TAILLE]; // Saisie d'un mot

 printf("Saisissez un mot : "); 
 scanf("%s", mot);
 while(getchar() != '\n') ;

 // Affichage du mot
 printf("%s%s\n", texte, mot);          

 /*
 probleme : le talbeau mot est depasse apres avoir entre 9 characteres . 
 Le reste des characteres est enregistre dans un espace de memoire inconnu probalbelent reservee au tableau texte. les carracteres en plus ecrasent les caracters de la chaine texte. 
 Le resultat renvoye lorqu'on entre un texte depassant la taille de 8 est compose des caracteres du mot ayant depasse la longuer du tableau plus le mot original 
*/

 return 0;
 }