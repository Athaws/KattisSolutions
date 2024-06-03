#include<stdio.h>
#include<string.h>

#define MAX_INPUTS 5
#define MAX_LENGTH 15

int main(){
    char arr[MAX_LENGTH], CIA[MAX_LENGTH] = "FBI";
    int counter = 0;

    for (int i = 0; i < MAX_INPUTS; i++){
        fgets(arr, MAX_LENGTH-1, stdin);

        if (strstr(arr, CIA) != NULL){
            printf("%d ", i+1);
            counter++;
        }
    }
    if (counter == 0)
        printf("HE GOT AWAY!\n");
    return 0;
}