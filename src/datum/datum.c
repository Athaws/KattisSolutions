#include<stdio.h>

int convert_month_to_day(int month);

int main(void){
    int day, month, date;

    scanf("%d %d", &day, &month);

    date = day + convert_month_to_day(month);

    if (date % 7 == 1)
        printf("Thursday\n");
    else if (date % 7 == 2)
        printf("Friday\n");
    else if (date % 7 == 3)
        printf("Saturday\n");
    else if (date % 7 == 4)
        printf("Sunday\n");
    else if (date % 7 == 5)
        printf("Monday\n");
    else if (date % 7 == 6)
        printf("Tuesday\n");
    else 
        printf("Wednesday\n");
    return 0;
}

int convert_month_to_day(int month){
    int converted_to_days;
    switch(month){
        case 1:
        converted_to_days = 0;
        break;

        case 2:
        converted_to_days = 31;
        break;

        case 3:
        converted_to_days = 59;
        break;

        case 4:
        converted_to_days = 90;
        break;

        case 5:
        converted_to_days = 120;
        break;

        case 6:
        converted_to_days = 151;
        break;

        case 7:
        converted_to_days = 181;
        break;

        case 8:
        converted_to_days = 212;
        break;

        case 9:
        converted_to_days = 243;
        break;

        case 10:
        converted_to_days = 273;
        break;

        case 11:
        converted_to_days = 304;
        break;

        case 12:
        converted_to_days = 334;
        break;
    }
    return converted_to_days;
}