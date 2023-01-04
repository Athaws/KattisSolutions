#include<stdio.h>
#include<string.h>

#define MAX_LEN 102

int main(){
    char input[MAX_LEN], ch = 0;
    int total_asciivalue = 0;

    fgets(input, MAX_LEN-1, stdin);

    for (int i = 0; i < strlen(input); i++){
        if (input[i] >= 32 && input[i] <= 126){
        total_asciivalue += input[i];
        ch++;
        } else
            continue;
    }
    printf("%c\n", (total_asciivalue / ch));
    
    return 0;
}