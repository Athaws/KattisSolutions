#include<stdio.h>
#include<string.h>

#define MAX_TEST_CASES 500
#define MAX_LENGTH 50

int main (void){
    int cases;
    char input1[MAX_LENGTH+1], input2[MAX_LENGTH+1];
    scanf("%d", &cases);
    if (cases > MAX_TEST_CASES) {
      cases = MAX_TEST_CASES;
    }

    for (int i = 0; i < cases; i++){
        char output[MAX_LENGTH+1];
        
        scanf("%s %s", input1, input2);

        output[strlen(input1)] = '\0';
        for (int j = 0; j < (strlen(input1)); j++){
            if (input1[j] == input2[j]){
                output[j] = '.';
            } else {
                output[j] = '*';
            }
        }
        printf("%s\n%s\n%s\n\n", input1, input2, output);
    }

    return 0;
}