max_guests, lines = map(int,input().strip().split())

current, disallowed = 0, 0
for attempt in range(lines):
    opts = input().strip().split()
    opts[1] = int(opts[1])
    if opts[0] == 'leave':
        current -= opts[1]
    elif opts[0] == 'enter' and current+opts[1] <= max_guests:
        current += opts[1]
    else:
        disallowed += 1
print(disallowed)