#include<stdio.h>
#include<math.h>

int main() {
    int input, sum = 0;

    scanf("%d", &input);
    sum += pow((pow(2, input))+1, 2);
    printf("%d", sum);

    return 0;
}