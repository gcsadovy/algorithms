#include <stdio.h>
#include <ctype.h>

//Last Digit of Fibonacci Number: find the last digit in the nth fibnumber by finding the sum of the last 2 digits of the first and the second numbers to be added

int main()
{
  int first = 0, second = 1, next;
  int c, n, lastDigit;

  printf("Please enter a number n to find the last digit in the nth fib number\n");
  scanf("%d", &n);

  if (n < 1 || n > 42) //check to see that n is \in 1..42
    printf("lastDigitFibNumber: error - please enter an integer that is \\in 1..42\n");
  else if (n < 3) //check to see if special case
    printf("%d\n", n - 1);
  else
    {
      for (c = 2; c <= n; c++) //calculate the nth fib number
	{
	  next = first + second;
	  first = second;
	  second = next;
	}
      printf("%d\n", (next % 10)); //use modulo % 10 to divide by 10 and get the remainder
    }
  return 0;
}


  
