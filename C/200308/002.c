// ����ü�� ����� �����͸� ���̳ʸ� ���Ϸ� �����

#include <stdio.h>

typedef struct score {
    char name[20];
    double kor, eng, total;
} STUDENT;

int main(void) {
    STUDENT s, ss;
    FILE* stream;

    printf("1. �̸� �Է� : ");
    fscanf(stdin, "%s", s.name); // stdin(ǥ�� �Է� ��Ʈ�� == Ű����)�� �Է¹ޱ�
    // int fscanf(FILE *stream, const char *format, ...)

    printf("2. ���� ����, ���� ���� �Է� : ");
    fscanf(stdin, "%lf %lf", &s.kor, &s.eng);
    s.total = s.kor + s.eng;

    stream = fopen("student.dat", "wb");
    fwrite(&s, sizeof(s), 1, stream); // ����(student.dat)�� ���
    fclose(stream);

    stream = fopen("student.dat", "rb");
    fread(&ss, sizeof(s), 1, stream); // ����(student.dat)�κ��� �Է�
    fprintf(stdout, "%s %.2lf %.2lf %.2lf \n", ss.name, ss.kor, ss.eng, ss.total);

    fclose(stream);

    return 0;
}