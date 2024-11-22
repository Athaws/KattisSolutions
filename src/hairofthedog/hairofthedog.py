n = int(input())

prev, curr, hangovers = "", "", 0
for _ in range(n):
    curr = input()
    if prev == "drunk" and curr == "sober":
        hangovers += 1
    prev = curr
print(hangovers)