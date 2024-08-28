won = 0
for battle in range(int(input())):
    seq = input().strip()
    if seq.find('CD') == -1:
        won += 1
print(won)