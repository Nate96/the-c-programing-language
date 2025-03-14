#include <stdio.h>

int power(int base, int n);

/* test power function */
int main() 
{
   int i;
   for (i = 0; i < 10; ++i)
      printf("%d %d %d\n", i, power(2, i), power(-3, i));
}

/* power: raise base to n-th power; n >= */
int power(int base, int n)
{
   int i, p;
   p = 1;
   for (i = 1; i <= n; ++i)
      p = p * base;
   return p;
}
