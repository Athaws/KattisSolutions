#include<stdio.h>

int main(){
    int n;
    long long int lastfact = 0;
    scanf("%d%*c", &n);

    for (int i = 0; i < n; i++){
        int t;
        scanf("%d", &t);
        for (int j = 0; j < t; j++){
            if (j == 0){
                lastfact = 1;
            } else if (j == 1){
                lastfact = 2;
            } else {
                lastfact *= j+1;
            }
        }
        printf("%lld\n", lastfact % 10);
    }
    
    return 0;
}