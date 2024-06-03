#include<stdio.h>
#include<math.h>

int main(){
    int matches, length, width, matchLength;

    scanf("%d %d %d", &matches, &length, &width);

    for (int i = 0; i < matches; i++){
        scanf("%d", &matchLength);
        if (pow(matchLength,2) <= pow(width,2) + pow(length,2)){
            printf("DA\n");
        } else if (pow(matchLength,2) > pow(width,2) + pow(length,2)){
            printf("NE\n");
        }
    }

    return 0;
}