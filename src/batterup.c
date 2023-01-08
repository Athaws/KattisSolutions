#include <stdio.h>

int main(void) {
    int n, sum = 0, num_bats = 0;
    scanf("%d%*c", &n);

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x >= 0) {
            sum += x;
            num_bats++;
        }
    }

    printf("%g\n", (float)sum / num_bats);
    return 0;
}