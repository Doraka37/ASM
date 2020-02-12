#include <stdio.h>
#include <string.h>

int MyStrlen(char *str);

int main() {

  if (MyStrlen("Hello") != 5)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (MyStrlen("") != 0)
    printf("Error on empty string test\n");
  else
    printf("Test2 passed\n");
  if (MyStrlen("Hello, world") != 12)
    printf("Error on multiple word test\n");
  else
    printf("Test3 passed\n");
}
