#include<stdio.h>
#include<stdlib.h>

#define HOUR 60
#define MINUTES 45

int main(){
    int h, m;
    
    scanf ("%d %d", &h, &m);
    
    switch (h){
        case 0:
            if (m < 45)
                printf("23 %d\n", HOUR - abs(m - MINUTES));
            else
                printf("%d %d\n", h, m-MINUTES);
            break;
        case 23:
            if (m < 45)
                printf("%d %d\n", h-1, HOUR - abs(m - MINUTES));
            else if (m == 45)
                printf("%d 0\n", h);
            else
                printf("%d %d", h, m - MINUTES);
            break;
        default:
            if (m < 45)
                printf("%d %d\n", h-1, HOUR - abs(m - MINUTES));
            else if (m == 45)
                printf("%d 0\n", h);
            else
                printf("%d %d\n", h, m - MINUTES);
            break;
    }
    return 0;
}