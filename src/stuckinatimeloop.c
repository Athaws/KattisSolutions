#include<stdio.h>
#include<string.h>

int main (){
    int num_times;
    char spell[] = {'A','b','r','a','c','a','d','a','b','r','a','\0'};

    scanf("%d", &num_times);

    for (int i = 0; i < num_times; i++){
        printf("%d %s\n", i+1, spell);
    }

    return 0;
}