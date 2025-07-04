// 10. 다음은 C언어의 포인터 문제이다. 알맞는 출력값을 작성하시오.

#include <stdio.h>
 
int main() {
    char* p = "KOREA";
    printf("%s\n", p);
    printf("%s\n", p+1);
    printf("%c\n", *p);
    printf("%c\n", *(p+3));
    printf("%c\n", *p+4);
}
