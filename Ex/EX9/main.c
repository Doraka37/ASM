#include <stdio.h>
#include <string.h>

int Modulo(int nb1, int nb2);

int main() {

  if (Modulo(10, 2) != 0)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (Modulo(2, 4) != 2)
    printf("Error on simple test2\n");
  else
    printf("Test2 passed\n");
  if (Modulo(19, 3) != 1)
    printf("Error simple test3\n");
  else
    printf("Test3 passed\n");
  if (Modulo(0, 0) != -1)
    printf("Error on full 0 test\n");
  else
    printf("Test4 passed\n");
}
