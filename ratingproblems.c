#include<stdio.h>

int main()
{
    int n = 0, k = 0, r[11], i;
    float min = 0, max = 0, minsum = 0, maxsum = 0;
    
    scanf("%d %d", &n, &k);
    
    for (i = 0; i < k; i++)
    {
        scanf("%d", &r[i]);
    }

    for (i = 0; i < k; i++)
    {
    min += r[i];
    max += r[i];
    }
    
    if (n != k)
    {
        for (i = 0; i < (n-k); i++)
        {
            min += -3;
            max += 3;
        }
        
        min = min / n;
        max = max / n;
    
        printf("%g %g\n", min, max);

    } else
    {
        for (i = 0; i < k; i++)
        {
            minsum = minsum + r[i];
            maxsum = maxsum + r[i];
        }
        minsum = minsum / n;
        maxsum = maxsum / n;
        printf("%g %g\n", minsum, maxsum);
    }
    return 0;
}