import sys
input = sys.stdin.read
sys.setrecursionlimit(10**6)

def concatenate(adjlist, strings, index):
    print(strings[index], end="")
    for child in adjlist[index]:
        concatenate(adjlist, strings, child)

data = input().splitlines()

n = int(data[0])
strings = data[1:n+1]
adjlist = [[] for _ in range(n)]
last = 0

for line in data[n+1:]:
    parent, child = map(int, line.split())
    adjlist[parent-1].append(child-1)
    last = parent-1

concatenate(adjlist, strings, last)