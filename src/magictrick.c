#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAX_LENGTH 51

int main(){
    char input[MAX_LENGTH];
    bool found;

    fgets(input, MAX_LENGTH-1, stdin);

    for(int i = 0; i < strlen(input); i++){
        found = true;
        for (int j = i+1; j < strlen(input); j++){
            if (input[i] == input[j]){
                found = false;
                break;
            }
        }
        if (!found){
            break;
        }
    }
    if (found){
        printf("1\n");
    } else if (!found){
        printf("0\n");
    }

    return 0;
}