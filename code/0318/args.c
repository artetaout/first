#include<stdio.h>

int print_time(int hour, int minute) {
    // int hour = 10, minute = 20;
    printf("%d:%d\n", hour, minute);

    return hour * 3600 + minute * 60;
}

int main(void) {
    int seconds = print_time(10, 20);
    printf("seconds = %d\n", seconds);
    return 0;
}