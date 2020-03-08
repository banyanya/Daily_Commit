// 구조체에 저장된 데이터를 바이너리 파일로 입출력

#include <stdio.h>

typedef struct score {
    char name[20];
    double kor, eng, total;
} STUDENT;

int main(void) {
    STUDENT s, ss;
    FILE* stream;

    printf("1. 이름 입력 : ");
    fscanf(stdin, "%s", s.name); // stdin(표준 입력 스트림 == 키보드)로 입력받기
    // int fscanf(FILE *stream, const char *format, ...)

    printf("2. 국어 점수, 영어 점수 입력 : ");
    fscanf(stdin, "%lf %lf", &s.kor, &s.eng);
    s.total = s.kor + s.eng;

    stream = fopen("student.dat", "wb");
    fwrite(&s, sizeof(s), 1, stream); // 파일(student.dat)에 출력
    fclose(stream);

    stream = fopen("student.dat", "rb");
    fread(&ss, sizeof(s), 1, stream); // 파일(student.dat)로부터 입력
    fprintf(stdout, "%s %.2lf %.2lf %.2lf \n", ss.name, ss.kor, ss.eng, ss.total);

    fclose(stream);

    return 0;
}