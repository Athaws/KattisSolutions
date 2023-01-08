#include<stdio.h>
#include<math.h>

int main(){
    int lawns;
    float total_area = 0, cost_per_sqm, s1, s2;

    scanf("%f %d", &cost_per_sqm, &lawns);

    for (int i = 0; i < lawns; i++){
        scanf("%f %f", &s1, &s2);
        total_area += (s1 * s2);
    }
    printf("%6f\n", cost_per_sqm * total_area);

    return 0;
}