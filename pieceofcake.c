#include<stdio.h>

#define CAKE_HEIGHT 4

int main() {
    long int tot_l, l_rem, b_rem;
    scanf("%ld %ld %ld", &tot_l, &l_rem, &b_rem);
    
    long int biggest_l, biggest_b;
    if (l_rem > (tot_l / 2))
        biggest_l = l_rem;
    else
        biggest_l = (tot_l - l_rem);
    
    if (b_rem > (tot_l / 2))
        biggest_b = b_rem;
    else
        biggest_b = (tot_l - b_rem);
    
    printf("%ld\n", biggest_l * biggest_b * CAKE_HEIGHT);
    return 0;
}