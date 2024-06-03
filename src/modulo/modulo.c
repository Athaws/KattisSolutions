#include<stdio.h>

int main()
{  
    int dupes = 0, numbers = 10, nums[10];

    for (int i = 0; i < numbers; i++) {
        int tmp;
        scanf("%d", &tmp);
        nums[i] = tmp % 42;
    }

    for (int i = 0; i < numbers; i++){
        for (int j = i+1; j < numbers; j++){
            if (nums[i] == nums[j]){
                for (int k = j; k < numbers; k++){
                    nums[k] = nums[k+1];
                }
                j--;
                numbers--;
                dupes++;
            }
        }
    }

    printf("%d\n", numbers);
    
    return 0;
}