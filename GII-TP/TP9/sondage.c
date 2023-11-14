/*
14/11/2023
Adam Caulier 
p2304842

Proramme qui realise un sondage 

compiler avec $ gcc -W -Wall -std=c99 -lm sondage.c -o sondage
executer avec $ ./sondage.c 

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

#define TAILLE 20 

int age[TAILLE]={0};
int dist[TAILLE]= {0};
char commu[TAILLE][TAILLE]={0};
int rev[TAILLE] = {0};
char choix[2] ;
unsigned int pers  = 0 ;
float moy = 0 ;
float eT = 0 ;
int taille = 20 ;

float moyenner( int age[], int taille , int pers )  {
    float moyenne = 0 ;
    for ( int i  = 0 ; i < taille ; i++){
        moyenne = moyenne + age[i];
    }
    moyenne = moyenne/pers ;
    return moyenne ;
}
float ecartTyper(int age[], int pers, int moyenne){
 float ecartType = 0 ;
 for (int i =  0 ; i < pers ; i++){
    ecartType = ecartType + pow(age[i]-moyenne, 2);
 }
 ecartType = sqrt(ecartType/pers);
 return ecartType ;
}

void histogrammer(int age[], int pers ){
    int tranche_age[4] = {0};
    for (int i = 0 ; i <pers ; i++){
        if ( age[i] >= 18 && age[i] <= 25) tranche_age[0] = tranche_age[0] + 1 ;
        if ( age[i] >= 26 && age[i] <= 40) tranche_age[1] = tranche_age[1] + 1 ;
        if ( age[i] >= 41 && age[i] <= 50) tranche_age[2] = tranche_age[2] + 1 ;
        if ( age[i] >= 51 && age[i] <= 65) tranche_age[3] = tranche_age[3] + 1 ;
    }
    printf ("18 - 25 :");
    for ( int i = 1 ; i <= tranche_age[0]; i++)printf("#");
    putchar('\n');

    printf ("26 - 40 :");
    for ( int i = 1; i <= tranche_age[1]; i++)printf("#");
    putchar('\n');

    printf ("41 - 50 :");
    for ( int i = 1 ; i <= tranche_age[2]; i++)printf("#");
    putchar('\n');

    printf ("51 - 65 :");
    for ( int i = 0 ; i <= tranche_age[3]; i++)printf("#");
    putchar('\n');
    
}
int main (){
    printf("Programme de sondage \n");
    unsigned int i = 0 ;
    while(true){
            printf("Quel est votre age ? ");
            scanf("%i", &age[i]);
            

            printf("A quelle distance en km de votre lieu de travail habitez-vous ? ");
            scanf("%i", &dist[i]);
           

            printf("Dans quelle commune habitez-vous ? ");
            scanf("%s", &commu[i][i]);
            

            printf("Quel est votre revenu annuel (en euros) ? ");
            scanf("%i", &rev[i]);

            printf("Nouvelle personne ? O/N \n");
            scanf("%s", choix);
            while(getchar() != '\n');
            
            i++ ; 
            pers++ ;

            if ( strcmp(choix , "N") == 0 )  break;
            
     
    }
    

    printf("Age   Distance(km)   Commune     Revenu \n");
    printf("___________________________________________\n");
    for (unsigned int j = 0 ; j < pers; ++j) printf("%i     %i             %s          %d \n", age[j], dist[j], commu[j], rev[j]);
    moy = moyenner(age, taille, pers) ;
    printf("Moyenne :  %f  \n", moy  );
    eT =ecartTyper(age, pers, moy ) ;
    printf("Ecart-Type :  %f  \n", eT  );

    histogrammer(age, pers); 
    return 0 ;

}