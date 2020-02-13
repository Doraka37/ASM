#include <stdio.h>
#include <string.h>

char *Cut(char *str, int n);

int main() {

  if (strcmp(Cut("Hello world", 6), "world") != 0)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (Cut("", 2) != NULL)
    printf("Error on Empty string test\n");
  else
    printf("Test2 passed\n");
  if (Cut("Hello", 7) != NULL)
    printf("Error on Empty string test\n");
  else
    printf("Test3 passed\n");
}
