#include<stdio.h>

int sumDigits(int num){
    int sum = 0, tmpnum = num;
    while (tmpnum > 0){
        sum += tmpnum % 10;
        tmpnum /= 10;
    }
    return sum;
}

int main() {
    int number;
    scanf("%d", &number);
    do {
        for (int p = 11; p < 1000; p++){
            if (sumDigits((p * number)) == sumDigits(number)){
                printf("%d\n", p);
                break;
            }
        }
        scanf("%d", &number);
    } while (number != 0);

    return 0;
}