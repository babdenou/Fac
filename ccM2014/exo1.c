#include <stdio.h>

void ordonne(void)
{
  float x, y, tmp;

  if (x > y)
  {
    y = tmp;
    y = x;
    x = tmp;
  }
}

int lire(void)
{
  int x, a, b;

  printf("borne entiere a = ");
  scanf("%d", &a);
  printf("borne entiere b = ");
  scanf("%d", &b);
  printf("entrer la valuer de x = ");
  scanf("%d", &x);

  if (b >= x >= a || a >= x >= b)
  {
    printf("x = %d", x);
  }
  return (0);
}

int menu(void)
{
  int x;

  printf("Voulez vous continuer ?\n\n");
  printf("Non : 0\n");
  printf("Oui : 1\n");
  scanf("%d", &x);
  printf("Votre choix : %d", x);
  if (x == 1)
  {
    x = 0;
    return (-1);
  }
  else
    return (0);

}

int main()
{
  ordonne();
  lire();
  menu();
  return (0);
}
/*
   int main()
   {
   int x, y, tmp;

   printf("entrer X compris entre 0 et 100: ");
   scanf("%d", &x);
   printf("entrer Y compris entre 10 et 50: ");
   scanf("%d", &y);
   if (100 >= x >= 0 || 50 >= y >= 10)
   {
   if (y > x)
   {
   tmp = y;
   y = x;
   x = tmp;
   }
   printf("X = %d; Y = %d\n", x, y);
   }
   return (0);
   }*/
