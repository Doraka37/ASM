#include <stdio.h>
#include <string.h>

int FindLower(char *str);

int main() {

  if (FindLower("Hello") != 1)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (FindLower("") != -1)
    printf("Error on empty string test\n");
  else
    printf("Test2 passed\n");
  if (FindLower("HELLO, world") != 7)
    printf("Error on multiple word test\n");
  else
    printf("Test3 passed\n");
}
