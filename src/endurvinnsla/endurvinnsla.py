town, maxrate, items = input(), float(input()), int(input())
bad = 0
for i in range(items):
    inp = input()
    if inp == "ekki plast":
        bad += 1
if bad > (maxrate * items):
    print("Neibb")
else:
    print("Jebb")