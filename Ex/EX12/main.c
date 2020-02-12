#include <stdio.h>
#include <string.h>

Char *StrToUpper(char *str);

int main() {

  if (strcmp(StrToUpper("Hello, world"), "HELLO, WORLD") != 0)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (strcmp(StrToUpper(""), "") != 0)
    printf("Error on Empty string test\n");
  else
    printf("Test2 passed\n");
}
