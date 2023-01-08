#include<stdio.h>
#include<string.h>

#define MAX_LEN 1001

int main(){
    char Jon[MAX_LEN], Doctor[MAX_LEN+1];

    fgets(Jon, MAX_LEN-1, stdin);
    fgets(Doctor, MAX_LEN, stdin);

    if (strlen(Jon) >= strlen(Doctor))
        printf("go\n");
    else 
        printf("no\n");
    
    return 0;
}