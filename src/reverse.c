#include<stdio.h>
#include<string.h>

#define MAX 1000000

int main(){
    int length, input[MAX];

    scanf("%d%*c", &length);

    for (int i = 0; i < length; i++){
        scanf("%d%*c", &input[i]);
    }

    for (int i = length-1; i >= 0; i--){
        printf("%d\n", input[i]);
    }

    return 0;
}