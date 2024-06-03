#include<stdio.h>

int main() {
    int classrooms, bottles;
    scanf("%d %d%*c", &classrooms, &bottles);
    for (int i = 0; i < classrooms; i++){
        int consume;
        scanf("%d%*c", &consume);
        bottles -= consume;
    }
    (bottles >= 0) ? printf("Jebb\n") : printf("Neibb\n");
    return 0;
}