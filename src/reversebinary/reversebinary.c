#include<stdio.h>
#include<math.h>

int main(){
    
    int input, binary[65], revbinary[65], reverse = 0;
    int elements = 0, i, j;

    scanf("%d", &input);

    for(i = 0; input > 0; i++) {
        binary[i] = input % 2;
        input /= 2;
        elements++;
    }

    i = 0;

    for (int j = elements-1; j >= 0; j--){
        revbinary[i] = binary[j];
        i++;
    }

    for (i = 0; i < elements; i++){
        reverse += revbinary[i] * pow(2, i);
    }

    printf("%d", reverse);

    return 0;
}