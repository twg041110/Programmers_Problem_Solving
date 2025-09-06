#include <stdio.h>
#include <string.h>

#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    
    int len = strlen(s1);   // 문자열의 길이를 구함
    
    for(int i = 0; i < len; i++){   //반복문으로 0부터 문자열이 끝날때까지 출력
        printf("%c\n", s1[i]);  //%c는 문자열 하나를 의미, \n은 줄바꿈을 의미
    }
    return 0;
}
