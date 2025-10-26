#include <stdio.h>
#include <stdlib.h>

float motPhanN(int n) {
  if (n == 1)
    return n;
  return 1.0/n + motPhanN(n - 1);
}

int main() {

  int n = 3;
  printf("%f", motPhanN(n));
  
  return EXIT_SUCCESS;  
}  
