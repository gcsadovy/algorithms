#include <stdio.h>
#include <ctype.h>

#define MAXN 1000
//Knapsack Algorithm: input the weights and values of n items and calculate the maximum value for a container with capacity W

struct Item {
  int weight;
  int value;
};

double computeVal(int W, struct Item arr[MAXN])
{
  int c;
  int ratioa, maxRatio, currentWeight = 0;

  for (c = 0; arr[c] != '\0'; c++)
    {
      ratioa = arr[c].value / arr[c].weight;
      if (ratioa >=

}

int main()
{
  int n, W, i = 0, w, v;
  struct Item arr[MAXN];

  printf("please enter the number of items you have and the capacity of the container\n");
  scanf("%d %d", &n, &W);

  while (i < n)
    {
      scanf("%d %d", &v, &w);
      arr[i].value = v;
      arr[i].weight = w;
    }

  printf("%f\n", computeVal(W, arr);
  return 0;
}



