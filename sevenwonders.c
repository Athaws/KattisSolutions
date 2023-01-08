#include<stdio.h>
#include<string.h>
#include<math.h>

#define MAX_LEN 52
#define PTS_PER_COMBO 7

int main() {
    char input[MAX_LEN];
    int t_counter = 0, c_counter = 0, g_counter = 0, combos = 0, total;

    fgets(input, MAX_LEN-1, stdin);
    input[strcspn(input, "\n")] = 0;

    for (int i = 0; i < strlen(input); i++){
        if (input[i] == 'T'){
            t_counter++;
        } else if (input[i] == 'C'){
            c_counter++;
        } else if (input[i] == 'G'){
            g_counter++;
        } else{
            continue;
        }
    }
    
    total = (pow(t_counter, 2) + pow(c_counter, 2) + pow(g_counter, 2));
    while (t_counter > 0 && c_counter > 0 && g_counter > 0){
        combos++;
        t_counter--;
        c_counter--;
        g_counter--;
    }
    total += (combos * PTS_PER_COMBO);

    printf("%d\n", total);
    return 0;
}