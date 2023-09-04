#include<stdio.h>
#include<math.h>

int main(){
    char pass1[5], pass2[5];
    int total = 1, j = 0;
    scanf("%s", pass1);
    getchar();
    scanf("%s", pass2);

    for (int i = 0; i < 4; ++i){
        if (pass1[i] != pass2[i]){
            j++;
            total = pow(2 , j);
        }
    }

    printf("%d\n", total);

    return 0;
}