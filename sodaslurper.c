#include<stdio.h>

int main(){
   
    int e, f, c, total = 0, temporary;

    scanf("%d %d %d", &e, &f, &c);
    e+= f;

    while (e >= c){
        temporary = e;
        e /= c;
        total += e;
        e += temporary % c;
    }

    printf("%d\n", total);

    return 0;
}