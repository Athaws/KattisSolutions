#include<stdio.h>
#include<string.h>

int main()
{  
    int input, i = 0, reverse[2];

    scanf("%d", &input);

    while (input > 0){
        reverse[i] = input % 10;
        input /= 10;
        i++;
    }

    for (i = 0; i < 2; i++){
        printf("%d", reverse[i]);
    }

    return 0;
}