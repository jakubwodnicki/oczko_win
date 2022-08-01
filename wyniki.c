#include "wyniki.h"
#include <stdio.h>
#include <stdlib.h>

int wyniki(int x, int y, int monetyGracz, int monetyPC, int pula, int pula_remis)

{
	if (x == y)
	{
		printf("Remis!");
	}

	else if (x < 21)
	{
		if (x > y)
			{
				printf("Wygrales!");
				monetyGracz = monetyGracz + pula;
			}
		else 
			{
				printf("Wygral przeciwnik!");
				monetyPC = monetyPC + pula;
			}	
	}
	
	else 
			{
				printf("Wygral przeciwnik!");
				monetyPC = monetyPC + pula;
			}
			
	return 
} 
