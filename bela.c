#include <stdio.h>
#include <string.h>

int main() {
  int num_hands, sum = 0;
  char dominant_suit;
  scanf("%d %c", &num_hands, &dominant_suit);

        //4 descriptions of cards per hand
  for (int i = 0; i <  4 * num_hands; i++) {
    char s[3];
    scanf("%s", s);

    switch(s[0]){
        case 'A':
        sum += 11;
        break;

        case 'K':
        sum += 4;
        break;

        case 'Q':
        sum += 3;
        break;
        
        case 'J':
        if (s[1] == dominant_suit){
            sum += 20;
        } else {
            sum += 2;
        }
        break;

        case 'T':
            sum += 10;
        break;

        case '9':
        if (s[1] == dominant_suit){
            sum += 14;
        }
        break;

        case 8:
        break;

        case 7:
        break;
        
        default:
        break;
    }
  }

  printf("%d\n", sum);

  return 0;
}