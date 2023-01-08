#include<stdio.h>

int main(){
    float input;
    scanf("%f", &input);

    printf("%.3f\n%.3f",1/(input/100), 1 + input/(100-input));
    
    return 0;
}