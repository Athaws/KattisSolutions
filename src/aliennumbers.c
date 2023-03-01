#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LEN 100

int getCharValue(char s, char* source);
void reverseString(char* s);

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        char number[MAX_LEN], source[MAX_LEN], target[MAX_LEN];
        scanf("%s %s %s", number, source, target);

        printf("Case #%d: ", i+1);

        int sizeSource = strlen(source);
        int sizeTarget = strlen(target);

        reverseString(number);

        long long int representation = 0;
        for(int j = 0; j < strlen(number); j++) {
            representation += getCharValue(number[j], source) * pow(sizeSource, j);
        }

        char ret[MAX_LEN] = "";
        while(representation > 0) {
            char digit = target[representation % sizeTarget];
            strncat(ret, &digit, 1);
            representation /= sizeTarget;
        }

        reverseString(ret);

        printf("%s\n", ret);
    }
    return 0;
}

int getCharValue(char s, char* source) {
    int i;
    for(i = 0; i < strlen(source); i++) {
        if(source[i] == s) {
            return i;
        }
    }

    return 0;
}

void reverseString(char* s) {
    int i, j;
    char tmp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}