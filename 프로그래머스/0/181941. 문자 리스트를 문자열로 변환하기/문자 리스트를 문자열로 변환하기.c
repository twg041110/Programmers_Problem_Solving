#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* arr[], size_t arr_len) {
    char* answer = (char*)malloc(sizeof(char)*(arr_len+1));
    for(int i=0; i<arr_len; i++){
        answer[i] = arr[i][0];
    }
    answer[arr_len] = '\0';
    return answer;
    
}