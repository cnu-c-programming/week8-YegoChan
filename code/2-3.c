#include <stdio.h>
#include <string.h>

int main() {
    char* p = "hello";
    char arr[] = "hello";

    printf("%zu %zu\n", sizeof(p), strlen(p));
    printf("%zu %zu\n", sizeof(arr), strlen(arr));

    return 0;
}

/*
    sizeof 인자로 포인터를 넣으면 포인터 크기인 8 출력
    sizeof 인자로 배열을 넣으면 배열 크기가 출력되는데, null 문자까지 6 출력
    문자열 길이 자체는 같으니까 strlen이 5를 똑같이 출력
 */