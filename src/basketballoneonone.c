#include<stdio.h>

#define MAX_INPUT 200

int main(){
    int scoreA = 0, scoreB = 0, player;

    do {
        player = getc(stdin)
        switch(player){
            case 'A':
                scoreA += getc(stdin);
                break;
            case 'B':
                scoreA += getc(stdin);
                break;
        }
    } while (player != -1);
    
    return 0;
}