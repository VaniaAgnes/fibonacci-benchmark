#include <stdio.h>
#include "mylib/mylib.h"

int main()
{
  long long int fibo = iterative_fibo(100);
  printf("%lld", fibo);

  getchar();

  return 0;
}
