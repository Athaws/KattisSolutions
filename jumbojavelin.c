#include<stdio.h>

int main()
{
    int number, length, total;

    scanf("%d", &number);
    scanf("%d", &length);
    total = length;

    if (number < 101 && number > 0){
    for (int i = 1; i < number; i++){
        if (length < 51 && length > 0){
        scanf("%d", &length);
        total += (length-1);
        }
    }

        printf("%d", total);
        return 0;

    } else {
        return 0;
        }
}
