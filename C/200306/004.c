// 함수 결과 반환 시, 구조체의 주소를 반환하는 코드

#include <stdio.h>

struct point {
    int x;
    int y;
};

struct point* function(void);

int main(void) {
    struct point* p;
    p = function();
    printf("%d %d \n", p->x, p->y);
    printf("%d %d \n", (*p).x, (*p).y);

    return 0;
}

struct point* function(void) {
    static struct point call = {10, 20};
    // 함수 결과 반환 이후, p가 간접접근을 해야하기 때문에 static 키워드를 사용한다. (line 15~16)
    return &call;
}