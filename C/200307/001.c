#include <stdio.h>

int main(void) {
    char array1[10];
    char array2[10] = "Good luck";

    printf("hello");

    puts("���ڿ��� �Է��ϼ���.");
    // vscode�� ������ �� GCC �����Ϸ��� ����ϴµ�, �ش� �����Ϸ����� gets() �Լ��� ���� ������ �۵����� �ʴ´�.
    gets_s(array1, sizeof(array1));
    puts(array1);

    puts(array2);
    puts("Good luck");

    return 0;
}