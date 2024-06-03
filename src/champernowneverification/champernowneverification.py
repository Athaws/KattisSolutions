n, word = input(), ''

for i in range(25):
    word += str(i+1)
    if n == word:
        print(i+1)
        exit(0)
print('-1')