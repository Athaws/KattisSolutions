#include<stdio.h>
#include<string.h>

#define MAX 2048

int main(){
    char input[MAX];

    scanf("%s", input);

    for (int i = 0; i < strlen(input); i++){
        if (input[i] == ':' || input[i] == ';'){
            if ((input[i+1] == ')') || (input[i+1] == '-' && input[i+2] == ')')){ 
                printf("%d\n", i);
            }
        }
    }
    return 0;
}