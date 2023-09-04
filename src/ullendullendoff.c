#include<stdio.h>
#include<string.h>

int main(){
    int friends, i = 0;
    char input[1010], *names[100], *pch;

    scanf("%d", &friends);
    getchar();
    fgets(input, 1009, stdin);

    pch = strtok(input, " ");
    while (pch != NULL){
        names[i] = pch;
        pch = strtok(NULL, " ");
        i++;
    }
    
    i = 12 % friends;
    printf("%s\n", names[i]);
}