#include<stdio.h>
#include<stdlib.h>

int main () {
    int n;
    
    while (1) {
        int sum = 0, currTime = 0, speed = 0, totTime = 0;
        scanf("%d", &n);
        getchar();
        if (n == -1) {
            break;
        }
        for (int i = 0; i < n; i++){
            scanf ("%d %d", &speed, &totTime);
            getchar();
            currTime = (totTime - currTime);
            sum += (speed * currTime);
            currTime = totTime;
        }
        printf("%d miles\n", sum);
    }
    return 0;
}