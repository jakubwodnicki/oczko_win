#include "losowanie.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int losowaniePC()

{
    int suma = 0;
    int los = 0; 
    srand( time(NULL));
   
    printf("\nWylosowane liczby przeciwnika: \n");
    	for (int i = 0; i < 2; i++)
    	{
    		 los = rand() % 12 + 1;
    		 printf("%d\n", los);
    		 suma = suma + los;
    	}
    	
    return suma;
   
}
