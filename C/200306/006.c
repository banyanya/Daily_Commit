// union �޸𸮸� ��� ����ϴ��� Ȯ��

#include <stdio.h>

union point {
    int x;
    int y;
};

int main(void) {
    union point p;
    p.x = 10;

    printf("%d %d \n", p.x, p.y);
    // �޸𸮿��� ���� p.x�� 10�̶� ���� ��� �ֱ� ������, ���� �޸𸮸� �����ϴ� p.y�� ����ϸ� 10�� ��µȴ�.
    
    return 0;
}