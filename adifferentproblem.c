#include<stdio.h>
#include<stdlib.h>

int main(){
    long long int a, b, sum;

    while (scanf("%lld %lld", &a, &b) == 2) {
        if ((a - b) < 0){
            printf("%lld\n", (b - a));
        } else {
            printf("%lld\n", (a - b));
        }
    }
    return 0;
}