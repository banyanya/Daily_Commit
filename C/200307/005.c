#include <stdio.h>
int main(void) {
    FILE* stream; // ���� ��Ʈ�� ������ ���� stream ����
    int file_state; // ������ ���Ḧ ���� ���� üũ ���� ����
    

    // ���� ��Ʈ�� ������ ���� ����
    stream = fopen("data1.txt", "w"); // stream�� �����ϰ� data1.txt�� ���� ���� ����.
    
    if(stream == NULL) // data1.txt ������ �������� ���� ���
        printf("���� ���� ���� \n");

    
    // ���� �ݱ�(���� ��Ʈ�� �Ҹ�)
    file_state = fclose(stream); // ���� �ݱ�(���� ��Ʈ�� �Ҹ�)
    if(file_state == EOF)
        puts("���� �ݱ� ����");

    return 0;
}