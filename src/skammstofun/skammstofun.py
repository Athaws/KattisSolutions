out, _ = '', input()
for word in input().split(' '):
    if word[0].isupper():
        out += word[0]
print(out)