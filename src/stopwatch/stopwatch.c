#include<stdio.h>

int main() {
    int times_pressed, press, sum = 0;

    scanf("%d", &times_pressed);

    for (int i = 0; i < times_pressed; i++){
        scanf("%d", &press);
        if (i % 2 == 0)
            sum -= press;
        else if (i % 2 != 0)
            sum += press;
    }

    if (times_pressed % 2 != 0){
        printf("still running\n");
    } else {
        printf("%d\n", sum);
    }

    return 0;
}