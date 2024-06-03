#include<stdio.h>
#include<math.h>

int main()
{
    int cases;
    scanf("%d", &cases);
    getchar();

    for (int i = 0; i < cases; i++){
        double k;
        scanf("%d", &k);
        getchar();
        printf("%d\n", pow(2, k)-1);
    }

    return 0;
}