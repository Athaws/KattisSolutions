#include<stdio.h>

int main(){
    int x1, x2, x3, y1, y2, y3, x4, y4;

    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    if (x3 == x2){
        x4 =  x1;
    } else if (x3 == x1){
        x4 = x2;
    } else {
        x4 = x3;
    }

    if (y3 == y2){
        y4 =  y1;
    } else if (y3 == y1){
        y4 = y2;
    } else {
        y4 = y3;
    }
    
    printf("%d %d", x4, y4);

    return 0;
}