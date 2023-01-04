#include<stdio.h>
#include<string.h>

#define MAX_LENGTH 31

int main(){
    char input[MAX_LENGTH];
    fgets(input, MAX_LENGTH-1, stdin);

    if (strstr(input, "ss") == NULL){
        printf("no hiss\n");
    } else{
        printf("hiss\n");
    }
    return 0;
}