#include <stdio.h>
#include <string.h>

char *Litllest(char *str);

int main() {

    if (Litllest("34:45:67:4:12") != '4')
        printf("Error on simple test\n");
    else
        printf("Test1 passed\n");
    if (Litllest("") != NULL)
        printf("Error on empty string test\n");
    else
        printf("Test2 passed\n");
    if (Litllest("45::18:27:48") != NULL)
        printf("Error on error test\n");
    else
        printf("Test3 passed\n");
    if (Litllest("45:18A:27:48") != NULL)
        printf("Error on error test2\n");
    else
        printf("Test4 passed\n");

}
