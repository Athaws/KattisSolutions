#include<stdio.h>

int main(){
    int wrong, right;
    scanf("%d %d", &wrong, &right);

    if (wrong == right)
        printf("0\n");
    else if (wrong < right){
        int forwardDist = (right-wrong), backwardDist = (360-right+wrong);
        (forwardDist <= backwardDist) ? printf("%d\n", forwardDist) : printf("%d\n", -backwardDist);
    } else {
        int forwardDist = (wrong-right), backwardDist = (360-wrong+right);
        (forwardDist < backwardDist) ? printf("%d\n", -forwardDist) : printf("%d\n", backwardDist);
    }
    return 0;
}