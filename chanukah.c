#include<stdio.h>
#include<string.h>

int main (){
    int totalcases, case_num, num_of_dates;

    scanf("%d", &totalcases);

    for (int i = 0; i < totalcases; i++){
        int sum = 0;
        scanf("%d %d", &case_num, &num_of_dates);
        for (int j = 1; j <= num_of_dates; j++){
            sum += j;
            if(j == num_of_dates){
                sum += j;
            }
        }
        printf("%d %d\n", case_num, sum);
    }

    return 0;
}