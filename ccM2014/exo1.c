#include <stdio.h>

void ordonne(int x, int y)
{
  int tmp;

  if (x > y)
  {
    y = tmp;
    y = x;
    x = tmp;
  }
}

void lire(int a, int x, int b)
{
//  int x, a, b;

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

}

int menu(void)
{
  int x;

    printf(" oui : 1");
    scanf("%d", &x);
    printf(" non : 0");
    scanf("%d", &x);
    if (x == 1)
    {
      x = 0;
      return (-1);
    }
    else
      return (0);

}

/*int main()
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
