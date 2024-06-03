#include<stdio.h>

int main() {
    int lines;
    scanf("%d", &lines);
    getchar();

    char cpu, mem, hdd;
    int c = 0, m = 0, h = 0;
    for(int i = 0; i < lines; i++){
        scanf("%c %c %c", &cpu, &mem, &hdd);
        getchar();
        if (cpu == 'J')
            c++;
        if (mem == 'J')
            m++;
        if (hdd == 'J')
            h++;
    }
    int min = __INT_MAX__;
    if (c < min)
        min = c;
    if (m < min)
        min = m;
    if (h < min)
        min = h;

    printf("%d\n", min);
    return 0;
}