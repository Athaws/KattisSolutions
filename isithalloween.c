#include<stdio.h>
#include<string.h>

int main(){
    char month[4], halloween[] = "OCT", christmas[] = "DEC";
    int day;

    scanf("%s %d", month, &day);

    if ((strcmp(halloween, month) == 0 && day == 31) || (strcmp(christmas, month) == 0 && day == 25))
        printf("yup\n");
    else 
        printf("nope\n");
    return 0;
}