#include<stdio.h>

int main()
{
    int a, b, c, i, item[100], max;

    scanf("%d %d %d", &a, &b, &c);

    for (i = 0; i < c; i++){
        scanf("%d", &item[i]);
    }

    max = (a - b) * 0.9;

    for (i = 0; i < c; i++){
        max -= item[i];
        }

    printf("%d", max);

    return 0;
}
