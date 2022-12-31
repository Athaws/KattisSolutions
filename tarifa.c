#include<stdio.h>

int main (){
    int monthly, months, spent, sum = 0;

    scanf("%d %d", &monthly, &months);

    for (int i = 0; i < months; i++){
        scanf("%d", &spent);
        sum += (monthly-spent);
    }

    printf("%d", monthly + sum);

    return 0;
}