#include<stdio.h>

int main()
{
    int contestants, carrots;
    char description[100];

    scanf("%d %d", &contestants, &carrots);
    
    for (int i = 0; i < contestants; i++){
    scanf("%s", description);
    }

    printf("%d", carrots);

    return 0;
}