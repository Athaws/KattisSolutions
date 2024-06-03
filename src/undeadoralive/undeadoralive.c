#include <stdio.h>
#include <string.h>

#define MAXLEN 160

int main() {
    char input[MAXLEN+1], frown[] = ":(", smile[] = ":)";
    int state = -1;
    
    fgets(input, MAXLEN, stdin);
    
    if (!strstr(input,smile) && strstr(input,frown))
        state = 0;
    else if (strstr(input,smile) && !strstr(input,frown))
        state = 1;
    if (strstr(input,smile) && strstr(input,frown))
        state = 2;
    
    switch (state) {
        case -1:
            printf("machine");
            break;
        case 0:
            printf("undead");
            break;
        case 1:
            printf("alive");
            break;
        case 2:
            printf("double agent");
            break;
    }
    
    return 0;
}
