#include <stdio.h>
#define TAILLE 5 

int main ()
{
	int i;
	int s;
	int T1[TAILLE];
	
	s = 0;	
	printf("Def des donnes:\n");
	for(i = 0; i < TAILLE; i++)
	{
		printf("T1[%d]?", i);
		scanf("%d", (T1+i));
	}
	printf("Effectif\t:\t");
	for(i = 0; i < TAILLE; i++)
	{
		printf("%d\t", *(T1+i));
	}
	printf("\nEffectif cumulés:\t");
	for(i = 0; i < TAILLE; i++)
	{
		s += *(T1+i);
		printf("%d\t", s);
	}
	printf("\n");
	return (0);	
}
