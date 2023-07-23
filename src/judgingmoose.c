#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a,  &b);

    if (a == b && a == 0){
        printf("Not a moose");
        return 0;
    }

    if (a > b){
        printf("Odd %d", 2 * a);
    }
    else if (b > a){
        printf("Odd %d", 2 * b);
    }
    else if (a == b){
        printf("Even %d", a + b);
    }

    return 0;
}