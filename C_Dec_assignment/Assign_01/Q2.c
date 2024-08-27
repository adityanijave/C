#include <stdio.h>

int main() {
    char *str1 = "Hello";
    char str2[] = "World";

    str1[0] = 'A';
    str2[0] = 'B';

    printf("%s %s\n", str1, str2);

    return 0;
}
