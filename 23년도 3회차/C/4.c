// 4. 다음은 C 언어 코드이다. 알맞는 출력 결과를 작성하시오.

#include <stdio.h>
 
int test(int n) {
    int i, sum = 0;
 
    for (i = 1; i <= n / 2; i++){
        if (n % i == 0)
        sum += i;
    }
 
    if (n == sum) 
        return 1;
    ​
    return 0;
}
 
 
int main(){
    int i, sum=0;
 
    for (i = 2; i <= 100; i++){ 
        if (test(i))
        sum += i;
    }
    
    printf("%d ", sum); 
    return 0;
}