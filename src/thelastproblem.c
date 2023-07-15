#include<stdio.h>
#include<string.h>

#define MAX_LENGTH 51

int main () {

    char name[MAX_LENGTH+1];

    fgets(name, MAX_LENGTH, stdin);
    name[strcspn(name,"\n")] = 0;

    printf("Thank you, %s, and farewell!", name);

    return 0;
}