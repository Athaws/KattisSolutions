#include<stdio.h>
#include<string.h>

#define MAX_LENGTH 1005

int main () {
    char input[MAX_LENGTH], ch = 'a';

    fgets(input, MAX_LENGTH-1, stdin);
    
    printf("%s", strchr(input, ch));
    
    return 0;
}