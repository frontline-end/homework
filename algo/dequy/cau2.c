#include <stdio.h>
#include <stdlib.h>

int nhan2cong1(int n) {
  if (n == 0)
    return 1;
  return 2*n+1 + nhan2cong1(n - 1);
}

int main() {

  int n = 4;
  printf("%d", nhan2cong1(n));
  
  return EXIT_SUCCESS;  
}  
