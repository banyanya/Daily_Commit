// 주소에 의한 호출

#include <stdio.h>

struct point {
    int x;
    int y;
};

void function(struct point* call);

int main(void) {
    struct point p = {10, 20};
    function(&p);

    return 0;
}

void function(struct point* call) {
    printf("%d %d \n", call->x, call->y);
    printf("%d %d \n", (*call).x, (*call).y);
}