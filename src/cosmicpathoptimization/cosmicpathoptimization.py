import math

n = int(input())
vals = [int(i) for i in input().split(' ')]
print(math.floor(sum(vals) / n))