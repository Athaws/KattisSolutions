n, m = int(input()), int(input())

names = [x for x in input().split()]
scores = [[int(x) for x in input().split()] for _ in range(m)]
parsed = [sum(scores[j][i] for j in range(m)) for i in range(n)]

print(names[parsed.index(max(parsed))])