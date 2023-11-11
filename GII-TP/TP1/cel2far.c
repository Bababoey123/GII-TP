/* 12/09/2023 */

#include<stdio.h>
int main () 
{
    	float celsius = 0 ;
    	float farenheit= 0 ;
    	
	printf(" Calcul celsius/farenheit \n" );
	
	
	printf(" Celsius= ? \n" );
	scanf("%f", &celsius);
	
	farenheit = celsius * 1.8 + 32 ;
	
	printf(" Farenheit= %f \n", farenheit );
	
	return(0);

}
