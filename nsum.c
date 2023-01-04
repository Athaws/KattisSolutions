#include<stdio.h>

int main(){
    int total_numbers, number, sum = 0;

    scanf("%d", &total_numbers);
    for (int i = 0; i < total_numbers; i++){
        scanf("%d", &number);
        sum += number;
    }
    printf("%d\n", sum);
    return 0;
}