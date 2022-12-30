#include <stdio.h>

int main(){
    int cases, strips, outlets, appliances, i, j;
    
    scanf("%d", &cases);
    
    for (i = 0; i < cases; i++){
        scanf("%d", &strips);
        appliances = 0;

        for (j = 0; j < strips-1; j++){
            scanf("%d", &outlets);
            appliances += (outlets-1);
        }
        scanf("%d", &outlets);
        appliances += (outlets);
        printf("%d\n", appliances);
    }
    return 0;
}