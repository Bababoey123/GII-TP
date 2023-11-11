/*
Adam Caulier p2304842     10/10/2023

Ce programme chiffre des messages grace a une clef

compiler avec $ gcc -W -Wall -std=c99 chifrement.c -o chifrement

*/

#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>
#define TAILLE 28

//char enco = '-c';
//char deco = '-d';
int clef= 0 ;
int i = 0 ;




int main (int argc, char * argv[])
{
  
  clef = atoi(argv[2]);


  if ( strcmp(argv[1], "-c")==0 ){

   	i=0;
    	while( argv[3][i] != '\0' )
		{
       		printf("%hhi ", argv[3][i]+clef);
       		i++;
		}
		printf("\n");
	}
	else if(strcmp(argv[1], "-d") == 0)
	{
		for(i=3 ; i<argc ; i++)
			printf("%c", atoi(argv[i])-clef);
		printf("\n");
	}
	else
	{
       printf("Erreur : option inconnue\n");
       return EXIT_FAILURE;
	}
	
	return EXIT_SUCCESS; 

}
   
