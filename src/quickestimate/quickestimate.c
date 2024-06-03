#include<stdio.h>
#include<string.h>

#define MAX_LEN 105

int main(){
    int cases;
    scanf("%d", &cases);
    getchar();

    for (int i = 0; i < cases; i++){
        char digits[MAX_LEN];
        fgets(digits, MAX_LEN, stdin);
        digits[strcspn(digits, "\n")] = 0;
        printf("%d\n", strlen(digits));
    }

    return 0;
}