#include<stdio.h>

#define MAX_INPUT 200

int main(){
    int scoreA = 0, scoreB = 0, player;
    char game[MAX_INPUT] = {0};

    fgets(game, MAX_INPUT-1, stdin);

    for(int i = 0; i < MAX_INPUT; i += 2){
        if(scoreA - scoreB >= 2 && scoreA > 10 || scoreA == 11 && scoreB != 10){
            printf("A\n");
            break;
        }
        else if(scoreB - scoreA >= 2 && scoreB > 10 || scoreB == 11 && scoreA != 10){
            printf("B\n");
            break;
        }
        if (game[i] == 'A')
            scoreA += game[i+1]-48;
        else
            scoreB += game[i+1]-48;
    }
    
    return 0;
}