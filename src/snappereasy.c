#include<stdio.h>
#include<stdbool.h>

int main(){
    int cases;
    scanf("%d", &cases);
    getchar();

    for (int i = 1; i <= cases; i++){
        bool bulb = true;
        int snaps, snappers;
        scanf("%d %d", &snappers, &snaps);
        getchar();
        for (int j = 0; j < snappers; j++){
            if (snaps % 2 == 0)
                bulb = false;
            snaps /= 2;
        }

        printf("CASE #%d: ", i);
        if (bulb)
            printf("ON\n");
        else
            printf("OFF\n");
    }

    return 0;
}