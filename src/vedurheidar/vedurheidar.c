#include<string.h>
#include<stdio.h>

#define MAX_SIZE 200

typedef struct {
    char name[MAX_SIZE];
    int maxspeed;
}road_t;

int main(){
    int windspeed, numRoads;
    scanf("%d\n%d", &windspeed, &numRoads);

    road_t roads[numRoads];
    for(int i = 0; i < numRoads; i++){
        scanf("%s %d", roads[i].name, &roads[i].maxspeed);
    }
    
    for (int i = 0; i < numRoads; i++){
        printf("%s ", roads[i].name);
        if(roads[i].maxspeed < windspeed)
            printf("lokud\n");
        else
            printf("opin\n");
    }

    return 0;
}