#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > 0 && b > 0){
        printf("1\n");
    }
    if (a < 0 && b > 0){
        printf("2\n");
    }
    if (a < 0 && b < 0){
        printf("3\n");
    }
    if (a > 0 && b < 0){
        printf("4\n");
    }
    return 0;
}
