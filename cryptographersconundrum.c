#include<stdio.h>
#include<string.h>

#define MAX 300

int main(){
    int counter = 0;
    char string[MAX];
    scanf("%s", string);

    for( int i = 0; i < strlen(string); i++){
        if (i % 3 == 0 && string[i] != 'P'){
            counter++;
        }
        if (i % 3 == 1 && string[i] != 'E'){
            counter++;
        }
        if (i % 3 == 2 && string[i] != 'R'){
            counter++;
        }
    }
    printf("%d\n", counter);

    return 0;
}