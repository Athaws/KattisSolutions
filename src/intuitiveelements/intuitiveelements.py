for _ in range(int(input())):
    abb, word = input(), input()
    print('YES' if all(c in abb for c in word) else 'NO')