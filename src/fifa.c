#include<stdio.h>

int main() {
    int sinceFrozen, perYear;
    scanf("%d\n%d", &sinceFrozen, &perYear);
    printf("%d\n", 2022+(sinceFrozen/perYear));
    return 0;
}