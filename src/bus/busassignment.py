currently_on, maximum_on = 0, 0
for _ in range(int(input())):
    off, on = input().split()
    currently_on = max(currently_on - int(off), 0)
    currently_on = min(currently_on + int(on), 10**9)
    maximum_on = max(currently_on, maximum_on)
print(maximum_on)