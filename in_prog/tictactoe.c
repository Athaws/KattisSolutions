#include<stdio.h>
#include<string.h>

int main () {
    int cols, rows;

    scanf("%d %d", &cols, &rows);
    getchar();

    char gameBoard[rows][cols+1];

    for (int i = 0; i < rows; i++) {
        fgets(gameBoard[i], cols+2, stdin);
        gameBoard[i][strcspn(gameBoard[i], "\r\n")] = '\0';
    }
    printf("\n");
    for (int i = 0; i < rows; i++) {
        printf("%s\n", gameBoard[i]);
    }
    return 0;
}
