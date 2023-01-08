#include<stdio.h>

int main(){
    int cases, expected_no_advert, expected_advert, cost;

    scanf("%d", &cases);
    for (int i = 0; i < cases; i++){
        scanf("%d %d %d", &expected_no_advert, &expected_advert, &cost);
        if (expected_no_advert == (expected_advert - cost)){
            printf("does not matter\n");
        } else if ((expected_advert - cost) > expected_no_advert){
            printf("advertise\n");
        } else if ((expected_advert - cost) < expected_no_advert){
            printf("do not advertise\n");
        }
    }
    return 0;
}