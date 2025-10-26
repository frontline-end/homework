#include <stdio.h>
#include <stdlib.h>

int ucln(int a, int b) {
  if (b == 0)
    return a;
  return ucln(b, a%b);
}

int main() {

  int a = 6, b = 4;
  printf("%d", ucln(a, b));
  
  return EXIT_SUCCESS;  
}  
