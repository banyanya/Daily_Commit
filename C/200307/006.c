#include <stdio.h>
int main(void) {
    int age;
    char name[20];

    printf("���̸� �Է� : ");
    scanf("%d", &age);

    // fflush(stdin); // �Է� ���۸� ����.

    printf("�̸��� �Է� : ");
    scanf("%s", name);

    printf("%d \n", age);
    printf("%s \n", name);

    return 0;
}