#include <stdio.h>

int main()
{
  int a, b, c, d, e;

  printf("a ? ");
  scanf("%d", &a);
  printf("b ? ");
  scanf("%d", &b);
  printf("c ? ");
  scanf("%d", &c);
  printf("d ? ");
  scanf("%d", &d);
  if (a > 0)
  {
    if (b > 1)
    {
      if (c > 2)
      {
        if (d > 3)
          e = a+b+c+d;
        else
          e = a+b+c-d;
      }
      else
      {
        if (d > 3)
          e = a+b-c+d;
        else
          e = a+b-c-d;
      }
    }
    else
    {
      if (c > 2)
      {
        if (d > 3)
          e = a-b+c+d;
        else
          e = a-b+c-d;
      }
      else
      {
        if (d > 3)
          e = a-b-c+d;
        else
          e = a-b-c-d;
      }
    }
  }
  else
    e = -1;
  printf("e = %d\n", e);
  return (0);
}
