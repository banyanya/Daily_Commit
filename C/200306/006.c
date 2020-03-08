// union 메모리를 어떻게 사용하는지 확인

#include <stdio.h>

union point {
    int x;
    int y;
};

int main(void) {
    union point p;
    p.x = 10;

    printf("%d %d \n", p.x, p.y);
    // 메모리에는 현재 p.x의 10이란 값이 담겨 있기 때문에, 같은 메모리를 공유하는 p.y를 출력하면 10이 출력된다.
    
    return 0;
}