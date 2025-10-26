#include <stdio.h>
#include <stdlib.h>

unsigned long giaiThua(int n) {
  if (n == 1) {
    return n;
  }
  return n * giaiThua(n - 1);
}

unsigned long congGiaiThua(int n) {
  if (n == 1)
    return n;
  return giaiThua(n) + congGiaiThua(n - 1);
}

int main() {

  int n = 6;
  printf("%ld", congGiaiThua(n));
  
  return EXIT_SUCCESS;  
}  
