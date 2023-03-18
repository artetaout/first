#include<stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int factorial_while(int n) {
    int ret = 1;
    while (n > 0) {
        ret = ret * n;
        n = n - 1;
    }
    return ret;
}

int factorial_for(int n) {
    int ret = 1;
    for (int i = n; i >= 1; i--) {
        ret *= i;
    }
    return ret;
}


int main() {
    int n = 5;
    printf("factorial %d = %d\n", n, factorial(n));
    printf("factorial %d = %d\n", n, factorial_while(n));
    printf("factorial %d = %d\n", n, factorial_for(n));
    return 0;
}

/*
n! = n * (n - 1) * (n - 2) ... 1
*/