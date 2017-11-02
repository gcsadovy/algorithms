#include <stdio.h>
#include <ctype.h>

//Greatest Common Denominator: take in a pair of numbers a b and compute the GCD using the euclidian algorithm

int main()
{
  int a, b, c, aBackup, bBackup;

  printf("please input numbers a b to find the LCM of (a, b)\n");
  scanf("%d %d", &a, &b);

  aBackup = a;
  bBackup = b;

  while (b > 0)
    {
      c = a; //placeholder
      a = b; 
      b = c % b;
    }
  printf("%d\n", ((aBackup * bBackup) / a));
  return 0;
}

  
