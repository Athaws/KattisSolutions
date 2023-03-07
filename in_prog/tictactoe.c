#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main () {
    int rows, winCon;
    bool In_Progress = true;

    scanf("%d %d", &rows, &winCon);
    getchar();

    char gameBoard[rows][rows+1];

    for (int i = 0; i < rows; i++) {
        fgets(gameBoard[i], rows+2, stdin);
        gameBoard[i][strcspn(gameBoard[i], "\r\n")] = '\0';
    }

    //Räkna X och O totaler.
    int X_Count = 0, O_Count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (gameBoard[i][j] == 'X')
                X_Count++;
            else if (gameBoard[i][j] == 'O')
                O_Count++;
            if (gameBoard[i][j] == '.')
                In_Progress = true;
            else
                continue;
        }
    }
    if (X_Count - O_Count > 1 || X_Count - O_Count < 0){ //Fler X eller O än möjligt gentemot den andra => Error.
        printf("ERROR");
        return 0;
    }

    char Winner;
    for (int i = 0; i < rows; i++) {
        bool SameRow = true;
        bool SameCol = true;

        for (int j = 0; j < rows-1; j++) {
            if (gameBoard[i][j] != gameBoard[i][j+1])
                SameRow = false;
        }
        for (int k = 0; k < rows; k++){
            
        }
        if (SameRow) {
            Winner = gameBoard[i][j];
        } else  if (SameCol){
            Winner = gameBoard[i][j];
        } else {
            continue;
        }
    }


    if (In_Progress) {
        printf("IN PROGRESS");
        return 0;
    }

    printf("\n");
    for (int i = 0; i < rows; i++) {
        printf("%s\n", gameBoard[i]);
    }
    return 0;
}
