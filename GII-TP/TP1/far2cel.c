/* 12/09/2023 */

#include<stdio.h>
int main () 
{
    	float celsius = 0 ;
    	float farenheit= 0 ;
    	
	printf(" Calcul farenheit/celsius \n" );
	
	
	printf(" Farenheit= ? \n" );
	scanf("%f", &farenheit);
	
	celsius = (farenheit - 32 ) / 1.8 ;
	
	
	printf(" Celsuis= %f \n", celsius );
	
	return(0);

}
