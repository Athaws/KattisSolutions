_, winnings = int(input()), map(int, input().split())
print("yes" if sum(winnings) % 3 == 0 else "no")