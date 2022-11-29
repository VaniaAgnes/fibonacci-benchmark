#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main()
{
  int n_fibo = 40;

  float start_time, end_time;

  start_time = (double)clock() / CLOCKS_PER_SEC;

  int i;
  for (i = 0; i <= n_fibo; i++)
  {
    recursive_fibo(i);
  }

  end_time = (double)clock() / CLOCKS_PER_SEC;

  printf("Time elapsed finding fibo number 0 to %d: %.12f seconds\n", n_fibo, end_time - start_time);

  return 0;
}
