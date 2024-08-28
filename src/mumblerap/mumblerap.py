_, num, nums = input(), '0', list()
for ch in input():
    if ch.isdigit():
        num += ch
    elif num != '0':
        nums.append(int(num))
        num = '0'
nums.append(int(num))
print(max(nums))