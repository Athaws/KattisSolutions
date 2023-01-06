#include<stdio.h>

void reverse_number(int *number);

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    reverse_number(&a);
    reverse_number(&b);

    if (a > b){
        printf("%d\n", a);
    } else{
        printf("%d\n", b);
    }
    return 0;
}

void reverse_number(int *number){
    int a, b, c;

    a = *number / 100;
    b = (*number % 100) / 10;
    c = *number % 10;

    *number = ((c * 100) + (b * 10) + a);
    return;
}