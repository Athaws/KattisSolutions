#include<stdio.h>
#include<math.h>

int main()
{
    int R1, R2, Sum, Mean;
    
    scanf("%d %d", &R1, &Mean);
    
    Sum = (2 * Mean);
    
    R2 = (Sum-R1);
    
    printf("%d", R2);
    
    return 0;
}