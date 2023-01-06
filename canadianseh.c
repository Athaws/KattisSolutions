#include<stdio.h>
#include<string.h>

#define MAX_LEN 105

int main(){
    char input[MAX_LEN];
    fgets(input, MAX_LEN-1, stdin);
    input[strcspn(input, "\n")] = 0;
    
    if (input[strlen(input)-1] == '?' && input[strlen(input)-2] == 'h' && input[strlen(input)-3] == 'e')
        printf("Canadian!\n");
    else
        printf("Imposter!\n");
    return 0;
}