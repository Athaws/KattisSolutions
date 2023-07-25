#include<stdio.h>
#include<math.h>

int main(){
    int photos, maxspeed = 0, prevdist = 0, prevhours = 0;
    scanf("%d", &photos);
    getchar();

    for (int i = 0; i < photos; i++){
        int hours, distance;
        scanf("%d %d", &hours, &distance);
        getchar();
        if (hours == 0)
            continue;
        if ((distance-prevdist)/(hours-prevhours) > maxspeed)
            maxspeed = (distance-prevdist)/(hours-prevhours);
        prevhours = hours;
        prevdist = distance;
    }
    printf("%d\n", maxspeed);

    return 0;
}