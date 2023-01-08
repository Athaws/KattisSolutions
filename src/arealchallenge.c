#include<stdio.h>
#include<math.h>

int main(){
    long long int input;

    scanf("%lld", &input);
    printf("%Lf", (long double)(sqrt(input) * 4));
    
    return 0;
}