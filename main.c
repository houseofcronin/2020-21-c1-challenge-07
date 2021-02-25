#include <stdio.h>

int sum(int v)
{
  if (v == 0) return 0;
  return (v % 10) + sum(v / 10);
}

int main()
{
  printf("\n\nIf at any time you want to end the program just enter 'Q'\n\n");

  int num = -1;

  printf("Please enter a number greater than zero: ");
  scanf("%i", &num);
  while (getchar () != '\n');

  if (num == -1)
    return 0;
  
  printf("The sum of the digits for the number %i is %i", num, sum(num));

  return main();
}

