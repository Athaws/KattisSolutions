#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAX_KNOTS 1001

int main(){
    int total_knots, knots_to_learn[MAX_KNOTS], knots_learned[MAX_KNOTS];
    int i, j, forgotten_knot;
    bool found;

    scanf("%d", &total_knots);

    for (i = 0; i < total_knots; i++){
        scanf("%d", &knots_to_learn[i]);
    }
    for (i = 0; i < total_knots-1; i++){
        scanf("%d", &knots_learned[i]);
    }
    for (i = 0; i < total_knots; i++){
        found = false;
        for (j = 0; j < total_knots - 1; j++){
            if (knots_to_learn[i] == knots_learned[j]){
                found = true;
                break;
            }
        }
        if (!found){
        printf("%d\n", knots_to_learn[i]);
        break;
        }
    }
    return 0;
}