#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int is_valid_word(const char *word, const char *hexagon, const char *center);

int main(){
    int totalWords;
    char hexagon[8];

    scanf("%s %d", hexagon, &totalWords);
    char *center = hexagon;

    for (int i = 0; i < totalWords; i++){
        char word[25];
        scanf("%s", word);
        if (strlen(word) >= 4 && is_valid_word(word, hexagon, center)){
            printf("%s\n", word);
        }
    }

    return 0;
}

int is_valid_word(const char *word, const char *hexagon, const char *center){

    if (strlen(word) < 4){
        return 0;
    }
    for (int i = 0; word[i] != '\0'; i++){
        if (strchr(hexagon, word[i]) == NULL){
        return 0;
        }
    }
    if (strchr(word, *center) == NULL){
        return 0;
    }
    return 1;
}