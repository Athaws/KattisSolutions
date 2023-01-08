#include<stdio.h>

int main (){
    int width, num_pieces, piecewidth, piecelength, piecetotal = 0;

    scanf("%d %d", &width, &num_pieces);

    for (int i = 0; i < num_pieces; i++){
        scanf("%d %d", &piecewidth, &piecelength);
        piecetotal += (piecewidth * piecelength);
    }

    printf("%d\n", piecetotal / width);

    return 0;
}