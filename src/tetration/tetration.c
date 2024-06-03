#include<stdio.h>
#include<math.h>

int main(){
    double n;
    scanf("%lf", &n);
    printf("%.6lf\n", pow(n, (1/n)));

    return 0;
}