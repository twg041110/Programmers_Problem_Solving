#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> // 문자열을 다루는 데 유용한 도구상자를 추가했어요! (strlen, strcpy)

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    
    // 1. my_string의 길이를 구해요.
    // strlen() 함수는 문자열의 길이를 알려주는 유용한 도구예요.
    int my_len = strlen(my_string);
    
    // 2. 덮어쓸 문자열 overwrite_string의 길이를 구해요.
    int overwrite_len = strlen(overwrite_string);
    
    // 3. 결과를 담을 공간을 '동적 할당'해요.
    // my_string 길이 + 1 만큼의 공간을 요청해요.
    // (+1을 하는 이유는 문자열의 끝을 표시하는 특별한 문자 '\0'을 저장할 공간이 필요하기 때문이에요.)
    char* answer = (char*)malloc(my_len + 1);
    
    // 4. 원본(my_string)의 내용을 복사본(answer)에 그대로 복사해요.
    // strcpy() 함수는 문자열을 통째로 복사해주는 편리한 도구예요.
    // 이제 answer는 my_string과 똑같은 내용을 가진, 수정 가능한 문자열이 됐어요.
    strcpy(answer, my_string);
    
    // 5. overwrite_string의 내용으로 answer의 특정 부분을 덮어써요.
    // for 반복문을 사용해서 overwrite_string의 글자 수만큼 반복할 거예요.
    for (int i = 0; i < overwrite_len; i++) {
        // answer의 s번째 위치부터 시작해서, overwrite_string의 i번째 글자를 차례대로 넣어줘요.
        // 예를 들어 i가 0일 때는 answer[s]에, i가 1일 때는 answer[s+1]에... 이렇게요.
        answer[s + i] = overwrite_string[i];
    }
    
    // 6. 완성된 결과물(answer)을 반환해요.
    return answer;
}