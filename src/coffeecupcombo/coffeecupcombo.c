#include<stdio.h>
#include<stdlib.h>

#define MAX 1001

int main(){
    int lectures, coffee_in_hands = 0, awake = 0;
    char *schedule;

    scanf("%d", &lectures);

    schedule = (char*)malloc(lectures * sizeof(char));
    scanf("%s", schedule);

    for (int i = 0; i < lectures; i++){
        if(schedule[i] == '1'){
            coffee_in_hands = 3;
        }
        if (coffee_in_hands > 0){
            coffee_in_hands -= 1;
            awake += 1;
        }
    }
    printf("%d\n", awake);
    return 0;
}