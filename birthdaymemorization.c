#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAX_FRIENDS 2000
#define MAX_NAME_LEN 12
#define DATE_LEN 7

int compare(const void* a, const void* b);

typedef struct{
    char Name[MAX_NAME_LEN];
    int Score;
    char Birthday[DATE_LEN];
} Friend;

int main(){
    Friend List[MAX_FRIENDS], Remembered[MAX_FRIENDS];
    int num_friends, counter = 0;
    
    scanf("%d", &num_friends);

    for (int i = 0; i < num_friends; i++){
        scanf("%s %d %s", List[i].Name, &List[i].Score, List[i].Birthday);
    }
    for (int i = 0; i < num_friends; i++){
        bool found = false;
        for (int j = 0; j < num_friends; j++){
            if (i != j && strcmp(List[i].Birthday, List[j].Birthday) == 0 && List[j].Score > List[i].Score){
                found = true;
                break;
            }
        }
        if (!found) {
            Remembered[counter] = List[i];
            counter++;
        }
    }
    printf("%d\n", counter);
    qsort(Remembered, counter, sizeof(Friend), compare);
    for(int i = 0; i < counter; i++){
        printf("%s\n", Remembered[i].Name);
    }

    return 0;
}

int compare(const void* a, const void* b){
    const Friend* f1 = (const Friend*)a;
    const Friend* f2 = (const Friend*)b;
    return strcmp(f1->Name, f2->Name);
}