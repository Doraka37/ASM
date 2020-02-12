#include <stdio.h>
#include <string.h>

Int Litllest(char *str);

int main() {

  if (Litllest("34:45:67:4:12") != 4)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (Litllest("") != NULL)
    printf("Error on empty string test\n");
  else
    printf("Test2 passed\n");
  if (Litllest("-4:15:27:48:-12") != -12)
    printf("Error on negative number test\n");
  else
    printf("Test3 passed\n");
}
