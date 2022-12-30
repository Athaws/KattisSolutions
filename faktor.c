#include<stdio.h>

int main(){
    int articles, impact;
    
    scanf("%d %d", &articles, &impact);
    printf("%d", (articles * (impact-1))+1);
    
    return 0;
}