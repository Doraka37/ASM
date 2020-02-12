#include <stdio.h>
#include <string.h>

int Add(int nb1, int nb2);

int main() {

  if (Add(10, 4) != 14)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (Add(-2, -4) != -6)
    printf("Error on negative result test\n");
  else
    printf("Test2 passed\n");
  if (Add(0, 4) != 4)
    printf("Error on add 0 test1\n");
  else
    printf("Test3 passed\n");
  if (Add(4, 0) != 4)
    printf("Error on add 0 test2\n");
  else
    printf("Test4 passed\n");
  if (Add(0, 0) != 0)
    printf("Error on full 0 test\n");
  else
    printf("Test5 passed\n");
}
