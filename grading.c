#include<stdio.h>

int main(){
    int A, B, C, D, E, score;
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    scanf("%d", &score);
    
    if (score >= A)
        printf("A\n");
    else if (score >= B)
        printf("B\n");
    else if (score >= C)
        printf("C\n");
    else if (score >= D)
        printf("D\n");
    else if (score >= E)
        printf("E\n");
    else 
        printf("F\n");
    return 0;
}