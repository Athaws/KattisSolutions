#include<stdio.h>

int main(){
    int cases;
    float time, beats;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++){
        scanf("%f %f", &beats, &time);
        printf("%f\n", (beats * 60) / time - (60 / time));
        printf("%f\n", (beats * 60) / time);
        printf("%f\n", (beats * 60) / time + (60 / time));
    }

    return 0;
}