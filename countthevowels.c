#include<stdio.h>
#include<string.h>

#define MAX 80

int main(){
    char input[MAX], vowels[] = "aeiouAEIOU", *chptr;
    int counter = 0;

    fgets(input, MAX-1, stdin);

    chptr = strpbrk(input, vowels);
    while (chptr != NULL){
        counter++;
        chptr = strpbrk(chptr+1, vowels);
    }

    printf("%d\n", counter);

    return 0;
}