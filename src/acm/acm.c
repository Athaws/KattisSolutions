#include<stdio.h>
#include<string.h>

#define MAX_LINES 100
#define MAX_LEN 15
#define PENALTY 20

typedef struct line_t {
    int time;
    char problem;
    char result[MAX_LEN];
} line_t;

int main(){
    line_t lines[MAX_LINES];
    int totalTime = 0, completed = 0, totalLines = 0;

    for(int i = 0; i < MAX_LINES; i++) {
        char tmp[MAX_LEN];
        fgets(tmp, MAX_LEN-1, stdin);
        sscanf(tmp, "%d %c %s", &lines[i].time, &lines[i].problem, lines[i].result);
        if (lines[i].time == -1)
            break;
        totalLines++;
    }
    for (int i = 0; i < totalLines; i++){
        if (strstr(lines[i].result, "right") != NULL){
            totalTime += lines[i].time;
            completed++;
            for (int j = 0; j < totalLines; j++){
                if (strstr(lines[j].result, "wrong") && lines[j].problem == lines[i].problem && i != j)
                    totalTime += PENALTY;
            }
        }
    }
    printf("%d %d\n", completed, totalTime);

    return 0;
}