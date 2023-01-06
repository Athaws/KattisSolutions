#include<stdio.h>

int main(){
    int n, temp, counter = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &temp);
        if(temp < 0){
            counter++;
        }
    }
    printf("%d\n", counter);

    return 0;
}