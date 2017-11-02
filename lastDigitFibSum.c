#include <stdio.h>
#include <ctype.h>

//Last Digit of Sum of Fibonacci Numbers: computes the last digit in a sum of fib numbers 0 to n

int main()
{
  int n, c, first = 0, second = 1, next;

  printf("please input the number n to compute the last digit of the sum of the first n Fibonacci numbers\n");
  scanf("%d", &n);

  if (n == 0)
    printf("%d\n", 0);
  else if (n == 1)
    printf("%d\n", 1);
  else
    {
      for (c = 2; c <= n + 2; c++)
	{
	  next = first + second;
	  first = second;
	  second = next;
	}
      printf("%d\n", ((next - 1) % 10));
    }
  return 0;
}

