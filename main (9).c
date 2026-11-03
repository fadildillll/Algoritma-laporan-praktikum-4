#include <stdio.h>

int main(void)
{
  for (int a = 0, b = 0; a < 5; a++, b += 5)
  {
    printf("Baris ke-%d : a = %d, b = %2d\n", a + 1, a, b);
  }


  return 0;
}