#include<stdio.h>

int main(){
    int sum = 0, mod11rule[12] = {4,3,2,7,6,5,'-',4,3,2,1,'\0'}, i;
    char cpr[12];

    fgets(cpr, 12, stdin);

    for (int i = 0; i < 12; i++){
        if (cpr[i] == '-' || cpr[i] == '\0'){
            continue;
        }
        sum += ((cpr[i]-48) * mod11rule[i]);
    }
    
    if (sum % 11 == 0){
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}