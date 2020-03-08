// return 키워드를 통해 함수 호출 영역으로 반환하는 코드

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point function(void);

int main(void) {
    struct point p;
    p = function();
    printf("%d %d \n", p.x, p.y);

    return 0;
}

struct point function(void) {
    struct point call = {10, 20};
    return call;
}