from sys import maxsize
youngest = maxsize
for i in range(int(input())):
    curr = int(input())
    if curr < youngest:
        youngest = curr
print(youngest)