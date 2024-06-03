#include<stdio.h>

int max (int a, int b);

int main () {
    int h, k, v, s, traveledHorizontally = 0;
    scanf("%d %d %d %d", &h, &k, &v, &s);
    while (h > 0) {
        v += s;
        v -=  max(1, (int) (v / 10));

        if (v >= k)
            ++h;
        
        if (v <= k) {
            --h;
            if (h ==  0)
                v = 0;
        }

        if (v <= 0) {
            h = 0;
            v = 0;
        }

        if (s > 0)
            --s;
        
        traveledHorizontally += v;
    }

    printf("%d", traveledHorizontally);
    
    return 0;
}

int max (int a, int b) {
    return (a > b ? a : b);
}