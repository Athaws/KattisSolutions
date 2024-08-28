def sifferprodukt(lst: list):
    num = 1
    for x in lst:
        if x != 0:
            num *= x
    return num if num < 10 else sifferprodukt([int(x) for x in str(num)])

print(sifferprodukt([int(x) for x in input()]))