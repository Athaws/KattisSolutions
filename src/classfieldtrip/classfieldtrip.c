#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXLISTSIZE 105

int main () {
    
    char list1[MAXLISTSIZE], list2[MAXLISTSIZE], combinedlist[2 * MAXLISTSIZE];
    fgets(combinedlist, MAXLISTSIZE-1, stdin);
    fgets(list2, MAXLISTSIZE-1, stdin);
    combinedlist[strcspn(combinedlist, "\n")] = 0;
    list2[strcspn(list2, "\n")] = 0;
    strcat(combinedlist, list2);
    
    char temp;
    int n = strlen(combinedlist);

    for (int i = 0; i < n-1; i++) {
      for (int j = i+1; j < n; j++) {
         if (combinedlist[i] > combinedlist[j]) {
            temp = combinedlist[i];
            combinedlist[i] = combinedlist[j];
            combinedlist[j] = temp;
         }
      }
   }

    printf("%s", combinedlist);
    
    return 0;
}