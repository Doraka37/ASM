#include <stdio.h>
#include <string.h>

char *Cmpsize(char *str1, char *str2, int flag);

int main() {

  if (Cmpsize("Hello", "Helo", 0) != "Hello")
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (Cmpsize("Hello", "Helo", 1) != "Helo")
    printf("Error on simple test2\n");
  else
    printf("Test2 passed\n");
  if (Cmpsize("Hello", "World", 0) != NULL)
    printf("Error on same size word test\n");
  else
    printf("Test3 passed\n");
}
