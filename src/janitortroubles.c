#include<stdio.h>
#include<math.h>

int main(){
    float s1, s2, s3, s4, s, area;

    scanf("%f %f %f %f", &s1, &s2, &s3, &s4);

    s = (s1 + s2 + s3 + s4)/2;

    area = sqrt((s - s1) * (s - s2) * (s - s3) * (s - s4));

    printf("%6f\n", area);

    return 0;
}