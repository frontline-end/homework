#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tru1MuNCong1(int n) {
  if (n == 0)
    return n;
  return pow(-1, n + 1) * n + tru1MuNCong1(n - 1);
}

int main() {

  int n = 4;
  printf("%d", tru1MuNCong1(n));
  
  return EXIT_SUCCESS;  
}  
