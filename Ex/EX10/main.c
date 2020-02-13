#include <stdio.h>
#include <string.h>

int Fibonacci(int n);

int main() {

  if (Fibonacci(1) != 1)
    printf("Error on simple test\n");
  else
    printf("Test1 passed\n");
  if (Fibonacci(2) != 1)
    printf("Error on simple test2\n");
  else
    printf("Test2 passed\n");
  if (Fibonacci(3) != 2)
    printf("Error on simple test3\n");
  else
    printf("Test3 passed\n");
  if (Fibonacci(4) != 3)
    printf("Error on simple test4\n");
  else
    printf("Test4 passed\n");
  if (Fibonacci(7) != 13)
    printf("Error on simple test5\n");
  else
    printf("Test5 passed\n");
  if (Fibonacci(0) != 0)
    printf("Error on error test\n");
  else
    printf("Test6 passed\n");
}
