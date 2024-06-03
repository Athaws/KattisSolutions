l1,l2,l3 = [int(c) for c in input().strip().split()], input().strip().split(), input().strip().split()
n, m = l1[0], l1[1]

for p in l2:
    if p in l3:
        print(p, end=' ')