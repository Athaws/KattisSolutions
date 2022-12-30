#include<stdio.h>

int main()
{
    int timesConstant;
    float qualAtAge, age, QALY = 0;

    scanf("%d", &timesConstant); 

    for (int i = 0; i < timesConstant; i++){
        scanf("%f %f", &qualAtAge, &age);
        QALY += (qualAtAge * age);
    }

    printf("%.3f", QALY);

    return 0;
}