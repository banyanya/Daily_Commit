#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i = 0;
    puts("10���� ������ �߻���ŵ�ϴ�.");
    srand(time(NULL));

    while(i < 10) {
        printf("%d \t", rand());
        i += 1;
    }
    return 0;
}