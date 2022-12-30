#include<stdio.h>
#include<string.h>

int main()
{
    int N, T, M, Combos;
    
    scanf("%d %d %d", &N, &T, &M);
    
    Combos = N * T * M;
    
    printf("%d", Combos);
    return 0;
}