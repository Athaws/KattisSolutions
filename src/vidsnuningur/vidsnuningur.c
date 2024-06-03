#include<stdio.h>
#include<string.h>

#define MAX_LEN 1005

int main(){
    char input[MAX_LEN];
    fgets(input, MAX_LEN, stdin);
    for (int i = strlen(input)-1; i >= 0; --i){
        if (input[i] == '\n')
            continue;
        printf("%c", input[i]);
    }
    printf("\n");
    return 0;
}