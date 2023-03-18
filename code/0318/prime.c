#include<stdio.h>


int isPrime(int n) {
    int i = 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            break;
        }
    }

    if (i == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}