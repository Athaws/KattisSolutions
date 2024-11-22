prices = [int(input()) for _ in range(int(input()))]
best = min(prices) - max(prices)//2
print(0 if best < 0 else best)