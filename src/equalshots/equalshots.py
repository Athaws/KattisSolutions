a, b = map(int, input().split())

alc_a, alc_b = 0, 0
for _ in range(a):
    ing, cont = map(int, input().split())
    alc_a += ing * cont
for _ in range(b):
    ing, cont = map(int, input().split())
    alc_b += ing * cont
print("same" if alc_a == alc_b else "different")