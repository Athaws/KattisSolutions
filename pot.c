#include<stdio.h>
#include<math.h>

#define MAX_SIZE 10000

int main (){
    int num_ints, power, sum = 0;
    
    scanf("%d", &num_ints);
    
    for (int i = 0; i < num_ints; i++){
        int input;
        scanf("%d", &input);
        
        power = input % 10;
        input /= 10;

        sum += pow(input, power);
    }

    printf("%d\n", sum);
    
    return 0;
}