// 8. 다음 C언어 코드에 알맞는 출력값을 작성하시오.

#include <stdio.h>
 
int f(int n) {
    if(n<=1) return 1;
    else return n*f(n-1);
}
 
int main() {
    printf("%d", f(7));
}