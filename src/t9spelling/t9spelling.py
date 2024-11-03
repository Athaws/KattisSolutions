keys = ["abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"]
mapping = {ch: str(i + 2) * (j + 1) for i, group in enumerate(keys) for j, ch in enumerate(group)}
mapping[' '] = '0'

for i in range(1, int(input()) + 1):
    nums = [mapping[ch] for ch in input().lower() if ch in mapping]
    result = [nums[0]] + [" " + nums[j] if nums[j][0] == nums[j-1][0] else nums[j] for j in range(1, len(nums))]
    print(f"Case #{i}: {''.join(result)}")