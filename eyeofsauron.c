#include<stdio.h>
#include<string.h>

#define MAX 100

int main(){
    char input[MAX];

    scanf("%s", input);

    if ((strlen(input)) % 2 == 0){
        int i = ((strlen(input)-1) / 2);
        if (input[i] == '(' && input[i+1] == ')'){
            printf("correct\n");
        } else{
            printf("fix\n");
        }
    } else
        printf("fix\n");
return 0;
}