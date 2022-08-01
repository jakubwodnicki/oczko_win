#include "zaklady.h"
#include <stdio.h>
#include <stdlib.h>

int zaklady(int x, int y, int xy, int pula, int start)
{
   start = 0;
   
   
 
   
   while (start == 0)
   {
   printf("\nTwoje monety: %d\n", x);
   printf("\nMonety przeciwnika: %d\n", y);
   printf("\nIle monet chcesz obstawic (przeciwnik da tyle samo)?");
   printf("\nStawka: ");
   scanf("%i", &xy);
   
	   if (xy > x)
	   {
	   	printf("Nie mozesz tyle obstawic!");
	   	system("cls");
	   }
	   
	   else
	   {
	   	start = 1;
	   } 
   }
   
   	   x = x - xy;
	   y = y - xy;
	   pula = xy*2; 
	   printf("\n\nPula wynosi %i monet/-y", pula);
	   
        
   return pula;    
   
}
