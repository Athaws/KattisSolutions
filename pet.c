#include<stdio.h>

#define NUM_CONTESTANTS 5

int main(){
    float score1, score2, score3, score4;
    int winner, winning_score = 0;
    for (int i = 0; i < NUM_CONTESTANTS; i++){
        scanf("%f %f %f %f", &score1, &score2, &score3, &score4);
        if (score1 + score2 + score3 + score4 > winning_score){
            winning_score = score1 + score2 + score3 + score4;
            winner = i+1;
        }
    }
    printf("%d %d\n", winner, winning_score);
    return 0;
}