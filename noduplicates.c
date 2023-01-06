#include<stdio.h>
#include<string.h>

#define MAX_LEN 80
#define MAX_WORDS 40

int main(){
    int num_words = 0;
    char input[MAX_LEN], *word, *words[MAX_WORDS];

    fgets(input, MAX_LEN, stdin);
    int length = strlen(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
    }

    word = strtok(input, " ");
    while (word != NULL) {
        words[num_words] = word;
        num_words++;
        word = strtok(NULL, " ");
    }

    for (int i = 0; i < num_words; i++) {
        for (int j = 0; j < num_words; j++) {
            if (i != j && strcmp(words[i], words[j]) == 0) {
                printf("no\n");
                return 0;
            }
        }
    }
    printf("yes\n");
    return 0;
}