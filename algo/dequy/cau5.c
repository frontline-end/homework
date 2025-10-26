#include <stdio.h>
#include <stdlib.h>

int countNum(int n) {
  if (n < 1) {
    return 0;
  }
  return 1 + countNum(n / 10);
}

int main() {

  int n = 124678;
  printf("%d", countNum(n));
  
  return EXIT_SUCCESS;  
}  
