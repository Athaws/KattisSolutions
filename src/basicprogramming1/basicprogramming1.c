#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAX_LEN 200010

void action1();
void action2(int a, int b);
void action3(int a, int b, int c);
void action4(int *arr, int size);
void action5(int *arr, int size);
void action6(int *arr, int size);
void action7(int *arr, int size);

int main(){
    int N, action, arr[MAX_LEN];

    scanf("%d %d", &N, &action);
    getchar();

    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    switch(action){
        case 1:
            action1();
            break;
        case 2:
            action2(arr[0], arr[1]);
            break;
        case 3:
            action3(arr[0], arr[1], arr[2]);
            break;
        case 4:
            action4(arr, N);
            break;
        case 5:
            action5(arr, N);
            break;
        case 6:
            action6(arr, N);
            break;
        case 7:
            action7(arr, N);
            break;
    }

    return 0;
}

void action1(){
    printf("7\n");
}

void action2(int a, int b){
    if (a > b)
        printf("Bigger\n");
    else if (a == b)
        printf("Equal\n");
    else
        printf("Smaller\n");
}

void action3(int a, int b, int c){
    if (a > b) {int tmp = a; a = b; b = tmp;}
    if (b > c) {int tmp = b; b = c; c = tmp;}
    if (a > b) {int tmp = a; a = b; b = tmp;}
    printf("%d\n", b);
}

void action4(int *arr, int size){
    long long int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    printf("%lld\n", sum);
}

void action5(int *arr, int size){
    long long int sum = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }
    printf("%lld\n", sum);
}

void action6(int *arr, int size){
    char outBuf[size];
    for (int i = 0; i < size; i++)
        outBuf[i] = (arr[i] % 26) + 97;
    printf("%.*s\n", size, outBuf);
}

void action7(int *arr, int size){
    bool visited[size];
    memset(visited, false, sizeof(visited));
    
    int i = 0;
    while (1){
        if (i >= size){
            printf("Out\n");
            break;
        }
        if (visited[i]){
            printf("Cyclic\n");
            break;
        }
        if (i == size-1){
            printf("Done\n");
            break;
        }
        visited[i] = true;
        i = arr[i];
    }
}