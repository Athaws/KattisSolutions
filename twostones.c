#include<stdio.h>
#include<string.h>

int main()
{
    int N;
    int stones[10000000];
    
    scanf("%d", &N);
    
    if (N%2 == 0)
    {
        printf("Bob");
    }
    if (N%2 != 0)
    {
        printf("Alice");
    }
    return 0;
}