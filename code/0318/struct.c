#include<stdio.h>

int main() {

    // int float double char
    struct complex {
        double x, y;
    } c1;

    c1.x = 3.0;
    c1.y = 4.0;

    printf("c1 = %f+%fi\n", c1.x, c1.y);

    return 0;
}