#include <stdio.h>

int main()
{
  float v, d;

  v = 0;
  d = 0;
  printf("nbr de victoires ? ");
  scanf("%f", &v);
  printf("nbr de defaites ? ");
  scanf("%f", &d);
  if (0 > v)
  {
    printf("erreur : #victoires < 0.");
    return (-1);
  }
  if (d < 0)
  {
    printf("erreur : #defaites < 0.");
    return (-1);
  }
  if (0 == v && 0 == d)
  {
    printf("erreur : #victoires + #defaites = 0.");
  }
  else
    printf("pourcentage de victoires = %.1f\n", 100 * v / (v + d));
  return (0);
}
