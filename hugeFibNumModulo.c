#include <stdio.h>
#include <ctype.h>

//Huge Fibonacci Number Modulo: calculate Fn modulo m where n may be really huge (10^18)

int main()
{
  int n, m, c, x, first = 0, second = 1, next, moduloFirst, moduloSecond, periodM;

  printf("please input the number n and m to conpute the modulo of the nth Fibonacci number\n");
  scanf("%d %d", &n, &m);

  if (m < 1)
    printf("Huge Fib Number Modulo: error - please input integer n > 0");
  else if (m == 1)
    printf("%d\n", 0);
  else if (n < 1)
    printf("%d\n", 0);
  else if (n == 1)
    printf("%d\n", 1);
  else
    {
      for (c = 2; c <= n; c++)
	{
	  next = first + second;
	  first = second;
	  second = next;
	  moduloFirst = first % m;
	  moduloSecond = second % m;
	  if (moduloFirst == 0 && moduloSecond == 1)
	    {
	      periodM = n % c;
	      for (x = 2; x <= periodM; x++)
		{
		  next = first + second;
		  first = second;
		  second = next;
		}
	      printf("%d\n", (next % m));
	    }
	  else
	    ;
	}
    }
  return 0;
}

	      
	      
	      
	  
