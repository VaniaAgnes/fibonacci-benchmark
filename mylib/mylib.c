#include "mylib.h"

long long int iterative_fibo(long long int n) {
  long long int a = 0;
  long long int b = 1;
  long long int output;

  if (n < 0) {
    return -1;
  }

  if (n == 0) {
    return 0;
  }

  if (n == 1) {
    return 1;
  }

  long long int i;
  for (i = 2; i <= n; i++)
  {
    output = a + b;
    a = b;
    b = output;
  }

  return output;
}

long long int recursive_fibo(long long int n)
{
  if (n == 0) {
    return 0;
  }

  if (n == 1) {
    return 1;
  }

  return recursive_fibo(n - 1) + recursive_fibo(n - 2);
}
