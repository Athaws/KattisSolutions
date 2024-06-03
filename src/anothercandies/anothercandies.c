#include<stdio.h>

int main() {
    int cases;
    
    scanf("%d", &cases);
    getchar();
    
    for (int i = 0; i < cases; i++) {
        long long int kids, candies = 0;
        scanf("%lld", &kids);
        getchar();
        
        for (int j = 0; j < kids; j++) {
            long long int tmp;
            scanf("%lld", &tmp);
            getchar();
            candies+= tmp % kids;
        }
        
        if (candies % kids == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}