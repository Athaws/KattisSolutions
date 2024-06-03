#include<stdio.h>

int main(){
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    for (int i = 1; i <= n3; i++){
        if (i % n1 == 0 && i % n2 != 0){
            printf("Fizz\n");
        } else if (i % n2 == 0 && i % n1 != 0){
            printf("Buzz\n");
        } else if (i % n1 == 0 && i % n2 == 0){
            printf("FizzBuzz\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}