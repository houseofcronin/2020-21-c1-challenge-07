#include <stdio.h>

int digitsum(int n)
{
  if (n == 0) return n;
  return (n % 10) + digitsum(n / 10);
}

int sum(int x, int y, int z);

int main(void) {
  int num;
  int i;
  
  printf("\nPlease enter a number: ");
  scanf("%i", &num);


  int filler = num;
  // filler will never be less than 1 because it's set to num
  // e.g. the user enters 12345 and the code places that value in num 
  //      then the first time your loop runs, i = 0 and filler which is equal to 12345 isn't less than 1 
  //      so the loop is skipped.
  for (i = 0; filler >= 1; i++)
  {
    printf("run %i > filler = %i, i = %i\n", i+1, filler, i);
    /*
      run 1 > filler = 12345, i = 0
      run 2 > filler = 1234, i = 1
      run 3 > filler = 123, i = 2
      run 4 > filler = 12, i = 3
      run 5 > filler = 1, i = 4


    */
    filler /= 10;
  }
  
  printf("\nThe sum of the digits is %i\n", sum(i, num, 0));

  // Now, use the digitsum function 
  printf("\nThe sum of the the digits using digitsum is %i\n", digitsum(num));

  return 0;
}

int sum(int x, int y, int z)
{
  printf("x = %i, y = %i, z = %i\n", x, y, z);
  if (x == 0)
  {
    return z;
  }
  else 
  {
    z += y % 10;
    y = y / 10;
    x--;
    return sum(x, y, z);
  }
}

/*
  exited, segmentation fault means that the program ran out of memory.
  that's probably due to an infinite loop (neverending) in your sum function.
  the code is fine up to the point where the sum function runs.
  so take a look at your sum function....
*/