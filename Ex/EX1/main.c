#include <stdio.h>
#include <string.h>

char *MyEcho(char *str);

int main() {

  if (strcmp(MyEcho("bonjour"), "bonjour") != 0)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (strcmp(MyEcho(""), "") != 0)
    printf("Error on Empty string test\n");
  else
    printf("Test2 passed\n");
}
