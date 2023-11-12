#include<stdio.h>

int main(){
    double inp;
    scanf("%lf", &inp);

    if (inp >= 32.7)
        printf("Farvidri\n");
    else if (inp >= 28.5)
        printf("Ofsavedur\n");
    else if (inp >= 24.5)
        printf("Rok\n");
    else if (inp >= 20.8)
        printf("Stormur\n");
    else if (inp >= 17.2)
        printf("Hvassvidri\n");
    else if (inp >= 13.9)
        printf("Allhvass vindur\n");
    else if (inp >= 10.8)
        printf("Stinningskaldi\n");
    else if (inp >= 8.0)
        printf("Kaldi\n");
    else if (inp >= 5.5)
        printf("Stinningsgola\n");
    else if (inp >= 3.4)
        printf("Gola\n");
    else if (inp >= 1.6)
        printf("Kul\n");
    else if (inp >= 0.3)
        printf("Andvari\n");
    else
        printf("Logn\n");

    return 0;
}