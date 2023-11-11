/*
Adam Caulier p2304842     26/09/2023

Calcul de la somme des n premeirs enteirs

compiler avec $ gcc -W -Wall -std=c99 -lm expo.c -o expo

*/

#include <stdio.h>
#include<math.h>

#define N 10

int x = 0;
float e = 0, facti = 1 ;

int factoriel( int number){
    int resultat = 1 ;
    for ( int i = 1 ; i < number + 1 ; ++i )
    {
        resultat =  resultat * i ;
        
    }

return resultat ;

}

int main () {
    
    printf("aproximation fonction exponenetielle \n");
    printf(" x = ? \n");
    scanf("%d", &x);

    for ( int i = 0 ; i < 10 ; ++ i) {
        
        facti = factoriel(i);
        e = e + pow(x, i)/facti;
    }
    
    printf("e = %.3f \n", e);
    return 0;
}
