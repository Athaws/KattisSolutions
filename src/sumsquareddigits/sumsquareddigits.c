#include<stdio.h>
#include<math.h>

int main () {
    int p;
    scanf("%d", &p);

    for (int i = 0; i < p; i++){
        long long int number, ssd = 0;
        int base, casenum;
        scanf("%d %d %lld", &casenum, &base, &number);

        while (number != 0) {
            ssd += (number % base) * (number % base);
            number /= base;
        }

        printf("%d %lld\n", casenum, ssd);
    }
    
    return 0;
}