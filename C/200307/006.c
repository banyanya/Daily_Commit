#include <stdio.h>
int main(void) {
    int age;
    char name[20];

    printf("나이를 입력 : ");
    scanf("%d", &age);

    // fflush(stdin); // 입력 버퍼를 비운다.

    printf("이름을 입력 : ");
    scanf("%s", name);

    printf("%d \n", age);
    printf("%s \n", name);

    return 0;
}