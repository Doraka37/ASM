#include <stdio.h>
#include <string.h>

int CountCara(char *str, char cara);

int main() {

  if (CountCara("Hello", 'l') != 2)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (CountCara("", 'l') != 0)
    printf("Error on empty string test\n");
  else
    printf("Test2 passed\n");
  if (CountCara("HELLO, world", 'l') != 3)
    printf("Error on multiple word test\n");
  else
    printf("Test3 passed\n");
}
