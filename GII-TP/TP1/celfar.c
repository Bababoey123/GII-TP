*/ 12/



#include<stdio.h>
int main () {
    	float celsius = 0 ;
    	float farenheit= 0 ;
    	int choix = 0;
    	
    	printf("Convertisseur Celsuis et Farenheit\n");
    	
    	
    	printf("Veuillez selectionner le mode \n");
    	printf(" 1: Convertisseur Celsuis/Farenheit\n");
    	printf(" 2: Convertisseur Farenheit/Celsuis\n");
    	
        scanf("%d", &choix);
    	while(getchar() != '\n');
    		
    		
    		if (choix == 1 )
    		{	
		printf(" Calcul celsius/farenheit \n" );
	
	
		printf(" Celsius= ? \n" );
		scanf("%f", &celsius);
	
		farenheit = celsius * 1.8 + 32 ;
	
		printf(" Farenheit= %f \n", farenheit );
	
		return(0);
		}
		
	
		else if ( choix == 2 ) 
		{
		printf(" Calcul farenheit/celsius \n" );
		
	
		printf(" Farenheit= ? \n" );
		scanf("%f", &farenheit);
	
		celsius = (farenheit - 32 ) / 1.8 ;
	
	
		printf(" Celsuis= %f \n", celsius );
	
		return(0);
		}
		
		
		else
		{
		 printf("Ce mode n'existe pas\n");
		 
		}
	
	

}
