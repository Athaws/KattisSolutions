#include<stdio.h>
#include<string.h>

#define MAX_LEN 1010

int main(){
    char input[MAX_LEN];
    fgets(input, MAX_LEN-1, stdin);

    (strstr(input, "COV")) ? printf("Veikur!\n") : printf("Ekki veikur!\n");
    
    return 0;
}