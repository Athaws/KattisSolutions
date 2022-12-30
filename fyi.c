#include<stdio.h>
#include<string.h>

int main()
{  
    int telenummer, i = 0, bad, nummerlista[7];

    scanf("%d", &telenummer);

    while (telenummer > 0){
        nummerlista[i] = telenummer % 10;
        telenummer /= 10;
        i++;
    }

    for (i = 4; i < 7; i++){
        if (nummerlista[i] != 5){
            bad++;
        }
    }

    if (bad > 0){
        printf("0\n");
    } else {
        printf("1\n");
    }

    return 0;
}
