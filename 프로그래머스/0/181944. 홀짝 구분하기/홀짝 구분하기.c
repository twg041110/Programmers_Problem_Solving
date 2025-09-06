#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    if(n % 2 == 0){
        printf("%d is even", n);
    }
    else{
        printf("%d is odd", n);
    }
        //또는 삼항연산자를 printf문에 넣어서 출력 가능 
        //printf("%d is %s" n, n % 2 ==0?"even":"odd");
    return 0;
}
