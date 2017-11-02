#include <stdio.h>
#include <ctype.h>

//Coin Changer: program computes the minimum number of coins of denominations 10, 5 and 1 it will take to equal input number m

int main()
{
  int m, dimes, nickels, pennies;

  printf("please enter the value m for which you wish to compute the minimum # of coins\n");
  scanf("%d", &m);

  dimes = ((m - (m % 10)) / 10);
  nickels = ((m % 10) >= 5 ? 1 : 0);
  pennies = ((m % 10) - 5 * nickels);

  printf("%d\n", (dimes + nickels + pennies));
  return 0;
}
