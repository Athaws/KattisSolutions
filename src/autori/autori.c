#include<stdio.h>
#include<string.h>

int main()
{
    
    char input[101];
    int i;

    scanf("%s", input);
   
    for (i = 0; i < strlen(input); i++){
    if ('A' <= input[i] && input[i] <= 'Z')
    {
        printf("%c", input[i]);
    }
    }

    return 0;
}