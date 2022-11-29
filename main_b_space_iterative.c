#include <stdio.h>
#include "mylib/mylib.h"

int main()
{
  long long int fibo = iterative_fibo(40);
  printf("%lld", fibo);

  return 0;
}
