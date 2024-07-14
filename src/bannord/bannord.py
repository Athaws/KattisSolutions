bannord, inp = input().strip(), input().strip().split()
print(' '.join(['*'*len(word) if any(ch in word for ch in bannord) else word for word in inp]))