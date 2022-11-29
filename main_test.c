#include <stdio.h>
#include <assert.h>
#include "mylib/mylib.h"

int main()
{
  int n_fibo = 40;

  int i;
  for (i = 0; i <= n_fibo; i++)
  {
    printf("fibo(%d):\n", i);
    long long int fibo_iterative = iterative_fibo(i);
    long long int fibo_recursive = recursive_fibo(i);
    printf("Iterative: %lld; Recursive: %lld\n\n", fibo_iterative, recursive_fibo(i));
    assert(fibo_iterative == fibo_recursive);
  }

  return 0;
}

