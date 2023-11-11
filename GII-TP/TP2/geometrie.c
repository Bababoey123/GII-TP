/*
Adam Caulier p2304842     19/09/2023

Programme de calcul d'équtions géometriques 

compiler avec $ gcc -W -Wall -std=c99 geometrie.c -o geometrie

*/

#include <stdio.h>
#include <math.h>

int choix = 0;
float a = 0;
float b = 0;
float c = 0;
float A = 0;
float B = 0;
float h = 0;
float s = 0;

int main ()
{
  printf("Calculateur d'équations géométriques \n ");
  printf("1: Surface d'un carre\n ");
  printf("2: Surface d'un rectangle\n ");
  printf("3: Surface d'un triangle\n ");
  printf("4: Surface d'un triangle (formule de Heron) \n ");
  printf("5: Surface d'un parallelogramme\n ");
  printf("6: Surface d'un trapeze\n ");
  printf("Veuillez taper un nombre pour selectioner l'equation de surface a calculer \n ");
  
  
  scanf("%i", &choix);
  while(getchar() !='\n');

  if ( choix == 1)
  {
    printf(" Surface d'un carre\n "); 
    printf(" Veuillez entrer la longeur des cotes du carre: a , b \n ");

    printf(" a = ?\n ");
    scanf("%f", &a);
    while(getchar() !='\n');

    A = a * a ;

    printf(" Aire = %f \n ", A);
   
  }

  else if ( choix == 2)
  {

    printf(" Surface d'un rectangle \n "); 
    printf(" Veuillez entrer la longeur des cotes du rectangle : a , b \n ");

    printf(" a = ?\n ");
    scanf("%f", &a);
    while(getchar() !='\n');

    printf(" b = ?\n ");
    scanf("%f", &b);
    while(getchar() !='\n');
 
    A = a * b ;

    printf(" Aire = %f \n ", A);
  
  }
  else if ( choix == 3)
  {
    printf(" Surface d'un triangle  \n "); 
    printf(" Veuillez entrer la longeur de la base et la hauteur du triangle  : b , h \n ");

    printf(" b = ?\n ");
    scanf("%f", &b);
    while(getchar() !='\n');

    printf(" h= ?\n ");
    scanf("%f", &h);
    while(getchar() !='\n');

    float t  ;

    t = b * h;

    A = t/2 ;

    printf(" Aire = %f \n ", A);


  
  }
  else if ( choix == 4)
  {
    printf(" Surface d'un triangle avec la formule de Heron \n "); 
    printf(" Veuillez entrer la longeur des cotes  du triangle  : a, b, c \n ");

    printf(" a = ?\n ");
    scanf("%f", &b);
    while(getchar() !='\n');

    printf(" b= ?\n ");
    scanf("%f", &h);
    while(getchar() !='\n');

    printf(" c= ?\n ");
    scanf("%f", &c);
    while(getchar() !='\n');
    
    if ( a + b > c && a + c > b && b + c > a )
    {
    
    float i, s, sa, sb, sc  = 0;

    i = a + b + c;
    s = i / 2 ;
    sa = s - a ;
    sb = s - b ;
    sc = s - c ; 
    A = sqrt(s * sa * sb * sc);

    printf(" Aire = %f \n ", A);

    }
    else
    {
        printf("Le triangle aux cotes saisis n'existe pas \n");
    }
  
  }
  
  else if ( choix == 5)
  {
    printf("Surface d'un parallelogramme\n ");
    printf(" Veuillez entrer la longeur de la base et la hauteur du parallelogramme  : b , h \n ");

    printf(" b = ?\n ");
    scanf("%f", &b);
    while(getchar() !='\n');

    printf(" h= ?\n ");
    scanf("%f", &h);
    while(getchar() !='\n');

    A = b * h;

   printf(" Aire = %f \n ", A);

  }

  else if ( choix == 6)
  {
    printf(" Surface d'un trapeze  \n "); 
    printf(" Veuillez entrer la longeur de la grande base, de la petie base  et la hauteur du trapeze : b , h \n ");

    printf(" B = ?\n ");
    scanf("%f", &B);
    while(getchar() !='\n');

    printf(" b= ?\n ");
    scanf("%f", &b);
    while(getchar() !='\n');


    printf(" h= ?\n ");
    scanf("%f", &h);
    while(getchar() !='\n');

    float t = 0 ;
    float i = 0 ;

    t = b + B;
    i = t * h ;
    A = i/2 ;

    printf(" Aire = %f \n ", A);
  }

  else
  {

    printf("Erreur, veuillez enter un  numero valable ");

  } 

 return 0;

}