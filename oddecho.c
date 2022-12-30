#include<stdio.h>

int main(){
    int numWords, i;
    char word[100][100];

    scanf("%d", &numWords);

    for (i = 0; i < numWords; i++){
        scanf("%s", &word[i]);
    }
    for (i = 0; i < numWords; i = i+2){
        printf("%s\n", word[i]);
    }

    return 0;
}