#include<stdio.h>

// 西安交通大学
/**

asdsad
*/
void newline() {
    printf("\n");
}

void threeline() {
    newline();
    newline();
    newline();
}

int main() {
    int hour = 10;
    int minute = 15;
    int seconds = 3600 * hour + minute * 60;
    // printf("hour = %s, minute = %s\n", hour, minute);
    // printf("hello world!\n");
    printf("seconds = %d\n", seconds);

    threeline();

    return 0;
}