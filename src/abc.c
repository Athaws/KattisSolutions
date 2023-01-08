#include<stdio.h>

int main(){
    char chs[4];
    int n1, n2, n3, temp;

    scanf("%d %d %d", &n1, &n2, &n3);
    scanf("%s", chs);

    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 > n3) {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    for (int i = 0; i < 3; i++) {
        if (chs[i] == 'A') {
            printf("%d ", n1);
        } else if (chs[i] == 'B') {
            printf("%d ", n2);
        } else {
            printf("%d ", n3);
        }
    }
    return 0;
}