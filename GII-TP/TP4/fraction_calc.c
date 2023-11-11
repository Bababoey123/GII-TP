/*
Adam Caulier p2304842     03/09/2023

Calcul de fractions

compiler avec $ gcc -W -Wall -std=c99 fraction_calc.c -o fraction_calc

*/

#include <stdio.h>

 


int  a  = 0;
int  b  = 0;
int num = 0 ;
int den = 0 ;
int c = 0 ;
int d = 0 ;
char op ;
float PGCD = 1 ;






int main ()
{
  int t = 1 ;
   // int t ;
  printf("Affichage de fraction \n") ;
  printf("Entrer la fraction a/b \n");
  scanf ("%i/%i", &num, &den) ;
  printf(" %i/%i \n", num, den);     // fin saisir   a / b
  
  while(getchar() !='\n');

  printf("Entrer operateur \n");       // saisir op
  scanf ("%c", &op) ;
  printf(" %c \n", op);           
  
  while(getchar() !='\n');
  
  printf("Entrer la fraction  c/d \n");      //  saisir c / d 
  scanf ("%i/%i", &c, &d) ;
  printf(" %i/%i \n", c, d);           
   
  if ( op == '*')  {
   
     num = num *c;
     den = den * d ;
     printf(" %i/%i \n", num, den); 

  }        
  if ( op == '/')  {
   
     num = num *d;
     den = den * c ;
     printf(" %i/%i \n", num, den); 

  }        
  if ( op == '+')  {
   
     num = num *d + c *den;
     den = den * d ;
     printf(" %i/%i \n", num, den); 

  }   
  if ( op == '-')  {
   
     num = num *d - c *den;
     den = den * d ;
     printf(" %i/%i \n", num, den); 

  }         

  a = num ;
  b =  den ;
         
  while( den != 0){     //simplifier
     t = den ;
     den = num%den;
     num = t ;
  }
  PGCD = num ;

  printf("PGCD = %f  \n", PGCD);
  
  a = a/PGCD ;
  b = b/PGCD ;

  if ( b < 0 )
  {
   a = -a ;
   b = -b ;

  }

  printf("\n");

  printf(" a/PGCD = %i \n", a);
  printf(" b/PGCD = %i \n", b);
  
  printf("Fonction simplifiee = %i/%i \n" , a, b );
  printf("\n");
  
  return 0;

}