#include<stdio.h>
#include<string.h>

#define MAX_INPUT 50

int main () {

    char input[MAX_INPUT+1];
    int ball = 1;

    fgets(input, MAX_INPUT, stdin);
    
    for(int i = 0; i < strlen(input); i++){
        switch(input[i]){
            case 'A':
                if (ball == 3)
                    break;
                if (ball == 2)
                    ball = 1;
                else
                    ball = 2;
            break;

            case 'B':
                if (ball == 1)
                    break;
                if (ball == 2)
                    ball = 3;
                else
                    ball = 2;
            break;

            case 'C':
                if (ball == 2)
                    break;
                if (ball == 3)
                    ball = 1;
                else
                    ball = 3;
            break;
        }
    }

    printf("%d", ball);

    return 0;
}
