#include<stdio.h>

int main(){
    int cases, input;
    scanf("%d", &cases);

    for (int i = 0; i < cases; i++){
        scanf("%d", &input);
        if (input % 2 == 0){
            printf("%d is even\n", input);
        } else {
            printf("%d is odd\n", input);
        }
    }

    return 0;
}