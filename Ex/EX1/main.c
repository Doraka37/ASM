#include <stdio.h>
#include <string.h>

char *myEcho(char *str);

int main() {

  if (strcmp(myEcho("bonjour"), "bonjour") != 0)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (strcmp(myEcho(""), "") != 0)
    printf("Error on Empty string test\n");
  else
    printf("Test2 passed\n");
}
