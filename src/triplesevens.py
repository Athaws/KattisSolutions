good, _ = True, input()
for _ in range(3):
    if '7' not in input().split(' '):
        good = False

print('777') if good else print('0')