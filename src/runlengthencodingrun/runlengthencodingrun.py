def e_rle(s):
    res, i = [], 0
    while i < len(s):
        count = 1
        while i + 1 < len(s) and s[i] == s[i + 1]:
            count += 1
            i += 1
        res.append(f'{s[i]}{count}')
        i += 1
    return ''.join(res)

def d_rle(s):
    res, i = [], 0
    while i < len(s):
        res.append(s[i] * int(s[i+1]))
        i += 2
    return ''.join(res)

inp = input().split(' ')
if inp[0] == 'E':
    print(e_rle(inp[1]))
else:
    print(d_rle(inp[1]))