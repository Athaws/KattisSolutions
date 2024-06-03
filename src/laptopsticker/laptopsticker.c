#include<stdio.h>
int main(){
    int wc, hc, ws, hs;

    scanf("%d %d %d %d", &wc, &hc, &ws, &hs);
    
    if ((wc - ws) >= 2 && (hc - hs) >= 2)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}