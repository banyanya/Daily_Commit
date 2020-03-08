// 자기 참조 구조체 연습

#include <stdio.h>

struct student {
    char name[20];
    int money;
    struct student* link;
};

int main(void) {
    struct student stu1 = {"Kim", 90, NULL};
    struct student stu2 = {"Lee", 80, NULL};
    struct student stu3 = {"Goo", 60, NULL};

    stu1.link = &stu2; // 불완전한 클래스 형식에 대한 포인터는 사용할 수 없습니다. >> 해결했다. student 오타였음
    stu2.link = &stu3;

    printf("%s %d \n", stu1.name, stu1.money);
    printf("%s %d \n", stu1.link -> name, stu1.link -> money);
    printf("%s %d \n", stu1.link -> link ->name, stu1.link -> link -> money);

    return 0;
}