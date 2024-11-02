mapping = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
for i in range(int(input())):
    nums = [mapping[ch] for ch in reversed(input())]
    total, prev = 0, nums[0]
    for num in nums[1:]:
        if num >= prev:
            total += prev
            prev = num
        else:
            total -= num
    else:
        total += prev
    print(total)