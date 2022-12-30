#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int cases, length, side, i, j, k;

    scanf("%d", &cases);

    while (cases--){
        char encrypted[10001];
        scanf("%s", encrypted);
        length = strlen(encrypted);
        side = sqrt(length);
        k = 0;
        char decrypted[side][side];

        for (i = 0; i < side; i++){
            for (j = 0; j < side; j++){
                decrypted[i][j] = encrypted[k++];
            }
        }

        for (j = side-1; j >= 0; j--){
            for (i = 0; i < side; i++){
                printf("%c", decrypted[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}