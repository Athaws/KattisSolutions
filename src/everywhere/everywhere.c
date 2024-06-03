#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAX_TRIPS 101
#define BIGNUMBER 2500
#define MAX_CITY_NAME_LENGTH 21

int main(){
    int cases, unique_visits = 0, trips_this_case;
    char trips[MAX_TRIPS][MAX_CITY_NAME_LENGTH];
    bool unique;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++){
        scanf("%d", &trips_this_case);
        for (int j = 0; j < trips_this_case; j++){
            scanf("%s", trips[j]);
            unique = true;
            for (int k = 0; k < j; k++){
                if (strcmp(trips[j], trips[k]) == 0) {
                    unique = false;
                    break;
                }
            }
            if (unique){
                unique_visits++;
            }
        }

        printf("%d\n", unique_visits);
        unique_visits = 0;
    }
    return 0;
}