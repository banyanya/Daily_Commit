#include <stdio.h>
int main(void) {
    FILE* stream; // 파일 스트림 포인터 변수 stream 선언
    int file_state; // 파일의 종료를 위한 상태 체크 변수 선언
    

    // 파일 스트림 생성과 파일 열기
    stream = fopen("data1.txt", "w"); // stream을 생성하고 data1.txt를 쓰기 모드로 연다.
    
    if(stream == NULL) // data1.txt 파일이 존재하지 않을 경우
        printf("파일 열기 에러 \n");

    
    // 파일 닫기(파일 스트림 소멸)
    file_state = fclose(stream); // 파일 닫기(파일 스트림 소멸)
    if(file_state == EOF)
        puts("파일 닫기 에러");

    return 0;
}