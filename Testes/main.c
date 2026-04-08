#include <stdio.h>

main()
{
  int a, b, c;
  b = 0; c = 0;
  for (a = 0; a <= 7; a++)
      b++;
      c--;
      c += b++;
 
  printf("%d e %d",b,c);
}