#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a >= b){
        for (int i = b; i <= a; i++){
            printf("%d\n", i+1);
        }
    } else{
        for (int i = a; i <= b; i++){
            printf("%d\n", i+1);
        }
    }
    
    return 0;
}