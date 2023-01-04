#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_ENCODE_LIST 101
#define MAX_MSG_LENGTH 1000
#define TEMP_MAX_LIMIT 997

int main(){
    int pos, i = 0;
    char encode_List[MAX_ENCODE_LIST];
    char decoded_Message[MAX_MSG_LENGTH];

    fgets(encode_List, MAX_ENCODE_LIST-1, stdin);

    while(fgetc(stdin) != '\n'){
        char encoded_Message[MAX_MSG_LENGTH];
        fgets(encoded_Message, MAX_MSG_LENGTH - TEMP_MAX_LIMIT, stdin);
        pos = atoi(encoded_Message);
        decoded_Message[i] = encode_List[pos-1];
        i++;
    }

    printf("%s\n", decoded_Message);

    return 0;
}