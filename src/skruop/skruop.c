#include<stdio.h>
#include<string.h>

int main() {
    char op[] = "Skru op!", ned[] = "Skru ned!", input[15];
    int volume = 7, numrequests;
    scanf("%d", &numrequests);
    getchar();

    for (int i = 0; i < numrequests; i++){
        fgets(input, 14, stdin);
        input[strcspn(input,"\n")] = 0;
        if (strcmp(input, op) == 0 && volume < 10){
            volume++;
        }
        else if (strcmp(input, ned) == 0 && volume > 0){
            volume--;
        }
    }

    printf("%d\n", volume);

    return 0;
}