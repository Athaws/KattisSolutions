#include<stdio.h>

int main(){
    int number;
    scanf("%d", &number);

    for (int j = number;;j++){
        int sum = 0, tmpnum = j;

        while(tmpnum > 0){
            sum += tmpnum % 10;
            tmpnum /= 10;
        }

        if (j % sum == 0){
            printf("%d\n", j);
            break;
        }
    }

    return 0;
}