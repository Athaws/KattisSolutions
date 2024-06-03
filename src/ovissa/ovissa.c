#include<stdio.h>
#include<string.h>

#define MAX_LEN 100005

int main(){
    char input[MAX_LEN];
    int longest_u = 0;

    fgets(input, MAX_LEN-1, stdin);

    for (int i = 0; i < strlen(input); i++){
        int u_cnt = 0;
        while (input[i] == 'u'){
            u_cnt++;
            i++;
        }
        longest_u = u_cnt;
    }

    printf("%d\n", longest_u);

    return 0;
}