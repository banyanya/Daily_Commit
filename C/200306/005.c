// union ¿¬½À

#include <stdio.h>

union point {
    int x;
    int y;
};

struct student {
    int a;
    int b;
};

int main(void) {
    printf("%d %d \n", sizeof(union point), sizeof(struct student));
    // sizeof(union point) == 4
    // sizeof(struct point) == 8

    return 0;
}