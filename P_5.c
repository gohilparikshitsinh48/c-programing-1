#include <stdio.h>

 int main() 
{ 
float gs, discount, ns; 

printf("Enter the gross sales: "); 

scanf("%f", &gs); 

if(gs > 20000) 
{ 
discount= gs * 0.15; 

 } 
else if (gs > 10000)
 {
 discount = gs * 0.10; 
 } 
else
 { 
discount= gs * 0.05;
 } 
 ns = gs - discount; 

printf("Net Sales = %f\n" ,ns)
return 0;
 }
