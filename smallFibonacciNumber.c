#include <stdio.h>
#include <ctype.h>

//Small Fibonacci Number: takes in an argument n, and finds the nth fibonacci number

int main()
{
  int n, first = 0, second = 1, next, c;

  printf("Enter the number n to find the nth number in the Fibonacci Series\n");
  scanf("%d", &n);

  if (n < 1 || n > 42) //check to see is digit \in 1..42
    printf("smlFibNum: error - please enter a single integer as input that is \\in 1..42\n");
  else if (n < 3) //check to see if either n = either 1 or 2 (special case)
    printf("%d\n", n - 1);
  else
    {
      for (c=2; c <= n; c++) //calculate nth fibnumber
      {
	next = first + second;
	first = second;
	second = next;
      }
      printf("%d\n", next);
    }
  return 0;
}
  
