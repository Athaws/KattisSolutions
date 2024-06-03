#include<stdio.h>

int main(){
    int days = 0, printers = 1, printed_statues = 0, wanted_statues;

    scanf("%d", &wanted_statues);

    while (wanted_statues > printed_statues){
        if ((wanted_statues - printed_statues) > printers){
            days += 1;
            printers += printers;
        } else {
            days += 1;
            printed_statues += printers;
        }
    }
    printf("%d\n", days);

    return 0;
}