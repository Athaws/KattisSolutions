#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    int i, e = 0, arraysize;
    char hey[1000];

    scanf("%s", hey);

    arraysize = sizeof(hey) / sizeof(hey[0]);

    for (i = 0; i < arraysize; i++){
        if (hey[i] == 'e'){
            e++;
        }
    }
    printf("h");
    for (i = 0; i < (2 * e); i++){
        printf("e");
    }
    printf("y");

    return 0;
}
