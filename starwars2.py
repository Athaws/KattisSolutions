n, nums = int(input()), sorted(list(map(int,input().split())))
print(*nums[n//3:2*(n//3)], *nums[:n//3], *nums[2*(n//3):])