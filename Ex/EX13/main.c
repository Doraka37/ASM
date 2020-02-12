#include <stdio.h>
#include <string.h>

Char *RevStr(char *str);

int main() {

  if (strcmp(RevStr("Hello world"), "dlrow olleH") != 0)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (strcmp(RevStr(""), "") != 0)
    printf("Error on Empty string test\n");
  else
    printf("Test2 passed\n");
}
