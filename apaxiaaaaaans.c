#include<stdio.h>
#include<string.h>

#define MAX 250

int main(){
    char name[MAX];

    scanf("%s", name);

    printf("%c", name[0]);
    for (int i = 1; i < strlen(name); i++){
        if (name[i] != name[i-1]){
            printf("%c", name[i]);
        } else{
            continue;
        }
    }
    printf("\n");

    return 0;
}