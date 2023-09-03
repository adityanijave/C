# include <stdio.h>

int main () {
    int n;
    const int m = 10;

    // with over writing
    printf("this is with over writing");
    n = 10;
    printf("n = %d", n);
    n = 11;
    printf("n = %d", n);

    // without over writing
    printf("this is without over writing");
    // const  m = 10;
    printf("m = %d", m);
    // m = 111;
    // printf("m = %d", m);

}