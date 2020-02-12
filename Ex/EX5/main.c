#include <stdio.h>
#include <string.h>

int AbsSubb(int nb1, int nb2);

int main() {

  if (AbsSubb(10, 4) != 6)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (AbsSubb(-2, 4) != 6)
    printf("Error on negative result test\n");
  else
    printf("Test2 passed\n");
  if (AbsSubb(0, -4) != 4)
    printf("Error on add 0 test1\n");
  else
    printf("Test3 passed\n");
  if (AbsSubb(4, 0) != 4)
    printf("Error on add 0 test2\n");
  else
    printf("Test4 passed\n");
  if (AbsSubb(0, 0) != 0)
    printf("Error on full 0 test\n");
  else
    printf("Test5 passed\n");
}
