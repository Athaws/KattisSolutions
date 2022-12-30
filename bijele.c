#include<stdio.h>

int main(){
    int king, queen, rook, bishop, knight, pawn;
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);
    if (king != 1){
        king = 1-king;
    } else{
        king = 0;
    }
    if (queen != 1){
        queen = 1-queen;
    }else{
        queen = 0;
    }
    if (rook != 2){
        rook = 2-rook;
    }else{
        rook = 0;
    }
    if (bishop != 2){
        bishop = 2-bishop;
    }else{
        bishop = 0;
    }
    if (knight != 2){
        knight = 2-knight;
    }else{
        knight = 0;
    }
    if (pawn != 8){
        pawn = 8-pawn;
    }else{
        pawn = 0;
    }
    
    printf("%d %d %d %d %d %d", king, queen, rook, bishop, knight, pawn);
    return 0;
}