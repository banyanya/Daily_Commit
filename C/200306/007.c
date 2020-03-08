// enum(열거형) 연습

#include <stdio.h>

enum week {ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN};
enum season {SPRING, SUMMER = 2, FALL, WINTER};

int main(void) {
    enum week p1, p2, p3;
    enum season s1, s2, s3, s4;

    p1 = ONE;
    p2 = TWO;
    p3 = THREE;

    printf("%d %d %d \n", ONE, TWO, THREE); // 0 1 2
    printf("%d %d %d \n", p1, p2, p3); // 0 1 2

    s1 = SPRING;
    s2 = SUMMER;
    s3 = FALL;
    s4 = WINTER;

    printf("%d %d %d %d \n", SPRING, SUMMER, FALL, WINTER); // 0 2 3 4
    printf("%d %d %d %d \n", s1, s2, s3, s4); // 0 2 3 4

    return 0;
}