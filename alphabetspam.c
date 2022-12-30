#include<stdio.h>
#include<string.h>

#define MAX 100001

void check_ratios(char *array, float *white, float *lower, float *upper, float *symbol);

int main() {
  
  char array[MAX];
  float white = 0, lower = 0, upper = 0, symbol = 0;

  scanf("%s", array);

  check_ratios(array, &white, &lower, &upper, &symbol);

  int total = white + lower + upper + symbol;

  white /= total;
  lower /= total;
  upper /= total;
  symbol /= total;

  printf("%f \n%f \n%f \n%f \n", white, lower, upper, symbol);

  return 0;
}

void check_ratios(char *array, float *white, float *lower, float *upper, float *symbol){

  for (int i = 0; array[i] != '\0'; i++){
    if (array[i] >= 33 && array[i] <= 126){
      if (array[i] == 95){
      *white = *white + 1;
      } else if (array[i] < 123 && array[i] > 96){
      *lower = *lower + 1;
      } else if (array[i] < 91 && array[i] > 64){
      *upper = *upper + 1;
      } else {
      *symbol = *symbol + 1;
      }
    }
  }
  return;
}
