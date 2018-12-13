#include <stdio.h>
#include <math.h>
#define TAILLE 5

int main ()
{
	float T1 [TAILLE];
	float T2 [TAILLE];
	float v;
	int i, r;

	r = 0;
	for (i = 0; i < TAILLE; i++)
	{
		printf("T[%d] = ", i);
		scanf("%f", &v);
		T1[i] = v;
	}
	for(i = 0; i < TAILLE; i++)
	{
		if (T1[i] <= 0)
		{
			r = 1;
			break;
		}

	}
	if (r)
	{
		printf("Donner non conformes\n");
	}
	else
	{
		for(i = 0; i < TAILLE; i++)
		{
			T2[i] = sqrt(T1[1]);
		}
		printf("\nT1	T2\n");
		for(i = 0; i < TAILLE; i++)
		{
			printf("%5.0f%\n9.2\n", T1[i], T2[i]);
		}
	}
	return (0);
}
