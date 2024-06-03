#include<stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    getchar();
    scanf("%d", &m);

    int array[n];
    for (int i = 0; i < n; i++)
        array[i] = m/n;
    
    if (m % n != 0){
        for (int i = 0; i < m % n; i++){
            array[i]++;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < array[i]; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}