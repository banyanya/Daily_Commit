#include <stdio.h>

int main(void) {
    char array1[10];
    char array2[10] = "Good luck";

    printf("hello");

    puts("문자열을 입력하세요.");
    // vscode는 컴파일 시 GCC 컴파일러를 사용하는데, 해당 컴파일러에는 gets() 함수가 없기 때문에 작동하지 않는다.
    gets_s(array1, sizeof(array1));
    puts(array1);

    puts(array2);
    puts("Good luck");

    return 0;
}