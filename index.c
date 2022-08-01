#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "zaklady.h"
#include "losowanieGracz.h"
#include "losowaniePC.h"


int main()
{
	system("clear");
	int graj = 0;
	int monetyGracz = 300;
	int monetyPC = 300;
	int stawka = 0;
	int pula = 0;
	int zakladOk = 0;
	int zak = 0;
	int los_gracz = 0;
	int los_pc = 0;



	printf("Witamy w Balckjack Game!\n");
	printf("\nCzy chcesz rozpoczac nowa gre? \n\n0 - Wyjdz     1 - Zagraj\n");
	printf("\nWybor: ");
	scanf("%i", &graj);
	
	switch(graj)
		{
			case 0:
				printf("Dziekujemy za gre!");
				return 0;
				break;
			
			case 1:
				printf("Zaczynajmy!");
				system("clear");
				break;
				
		}
while (monetyGracz > 0 && monetyPC > 0){
		
	zak = zaklady(monetyGracz, monetyPC, stawka, pula, zakladOk);
	
	monetyGracz = monetyGracz - (zak/2);
	monetyPC = monetyPC - (zak/2);
		
	los_gracz = losowanieGracz();
	sleep(1);
	los_pc = losowaniePC();
	
	
if (los_gracz == los_pc)
	{
		printf("Remis!");
		monetyGracz = monetyGracz + (zak/2);
		monetyPC = monetyPC + (zak/2);
	}

	else if (los_gracz <= 21)
	{
		if (los_gracz > los_pc )
			{
				printf("Wygrales!");
				monetyGracz = monetyGracz + zak;
			}
		else 
			{
				printf("Te runde wygral przeciwnik!");
				monetyPC = monetyPC + zak;
			}	
	}
	
	else 
		{
			printf("\nTe runde wygral przeciwnik!");
			monetyPC = monetyPC + pula;
		}
		
}

if (monetyGracz == 0)
	{
		printf("\nNiestety, przegrales. Powodzenia nastepnym razem!");
	}
	
else 
	{
		printf("\nGratulacje! Wygrales!");
	}
	
return 0;

}
