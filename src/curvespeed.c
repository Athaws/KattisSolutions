#include<stdio.h>
#include<math.h>

int main(){
    float r, s;
    while (scanf("%f %f", &r, &s) == 2)
        printf("%.0f\n", round(sqrt((r * (s + .16)) / .067)));
    return 0;
}