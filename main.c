#include <stdio.h>

int sum(long v)
{
  if (v == 0) return 0;
  return (v % 10) + sum(v / 10);
}

int main()
{
  printf("\n\nIf at any time you want to end the program just enter \n");
  printf("a negative number or letter\n\n");

  long num = -1;

  printf("Please enter a number greater than zero: ");
  scanf("%li", &num);
  while (getchar () != '\n');

  if (num < 0)
    return 0;
  
  printf("The sum of the digits for the number %li is %i", num, sum(num));

  return main();
}