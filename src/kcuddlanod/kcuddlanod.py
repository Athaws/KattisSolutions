n, m = input().split()
n, m = list(n), list(m)
for i in range(len(n)):
    n[i] = '2' if n[i] == '5' else '5' if n[i] == '2' else n[i]
for i in range(len(m)):
    m[i] = '2' if m[i] == '5' else '5' if m[i] == '2' else m[i]
print(2 if int(''.join(m[::-1])) > int(''.join(n[::-1])) else 1)