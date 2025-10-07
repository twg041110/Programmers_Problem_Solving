#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str1, const char* str2) {
    int length = strlen(str1);
    char* answer = (char*)malloc(sizeof(char)*(length*2+1));
    for(int i=0;i<length;i++){
        answer[i*2] = str1[i];
        answer[i*2+1] = str2[i];
    }
    answer[length*2] = '\0';
    return answer;
}