#include<stdio.h>
#include<stdbool.h>

bool check_possible_solution(int a, int b, int c);

int main() {
    int n, a, b, c;
    scanf("%d%*c", &n);

    for (int i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);

    if (check_possible_solution(a, b, c))
        printf("Possible\n");
    else
        printf("Impossible\n");
    }
    
    return 0;
}

bool check_possible_solution(int a, int b, int c){
    if (a * b == c)
        return true;
    if (a / (float)b == c || b / (float)a == c)
        return true;
    if (a + b == c)
        return true;
    if (a - b == c || b - a == c)
        return true;
    else
        return false;
}