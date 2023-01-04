#include<stdio.h>

int main(){
    int input;

    scanf("%d", &input);
    int l = input;
    int r = input;
    while((l % 100) != 99 && (r % 100) != 99){
        if (l > 1)
            l--;
        r++;
        }
    if ((l % 100) == 99 && (r % 100) == 99)
        printf("%d\n", r);
	else if ((l % 100) == 99)
        printf("%d\n", l);
	else
        printf("%d\n", r);
    return 0;
}