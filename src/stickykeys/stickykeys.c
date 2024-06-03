#include<stdio.h>
#include<string.h>

#define MAX_INPUT 1005

int main(){

    char input[MAX_INPUT], output[MAX_INPUT];

    fgets(input, MAX_INPUT, stdin);

    printf("%c", input[0]);
    for (int i = 1; i < strlen(input); i++){
        if (input[i] != input[i-1])
            printf("%c", input[i]);
    }

    return 0;
    }