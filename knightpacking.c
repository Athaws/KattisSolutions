#include<stdio.h>

int main(){
    int input;

    scanf("%d", &input);

    if (input % 2 != 0){
        printf("first");
    } else {
        printf("second");
    }

    return 0;
}