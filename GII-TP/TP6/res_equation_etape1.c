/*
Adam Caulier p2304842     17/10/2023

Resolution d'equations

compiler avec $ gcc -W -Wall -std=c99 res_equations.c -o reseq

*/

#include <stdio.h>
#include<math.h>
#define TOLL 0.000001
 


float x1  = 5;
float x2  = 10;
float y1  = 0;
float y2  =0 ;
float y  =0 ;
float x  =0 ;


float fonction ( float x ){
    y = pow(x,2) -5 ;
    return y ;
}
int main ()
{
 y1 = fonction( x1 );
 y2 = fonction( x2);

 do 
 {
  x = x2 -y2*(x2-x1)/(y2-y1);
  y= fonction(x);
  x1 = x2;
  x2 = x;
  y1 = y2;
  y2 = y ;



 }while(fabs(y1)> TOLL);


 printf("%f", y);
 printf("\n");
 printf("%f", x);
 printf("\n");
 return 0 ; 

}