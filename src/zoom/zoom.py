n, k = [int(c) for c in input().split(' ')]
lst = [int(c) for c in input().split(' ')]
for i, c in enumerate(lst):
    if (i+1) % k == 0:
        print(c, end =' ')