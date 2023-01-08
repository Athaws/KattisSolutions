#include<stdio.h>
#include<math.h>

int main(){
    int n, start = 1, nextlayer = 0, totallayers = 0;
    scanf("%d", &n);

    do {
        nextlayer += pow(start+2, 2);
        start = start+2;
        totallayers++;
    } while (n > nextlayer);

    printf("%d", totallayers);
    
    return 0;
}