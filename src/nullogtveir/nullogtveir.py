def count_valid(index, is_limited):
    if index == len(string):
        return 1
    total_count = 0
    for digit in '02':
        if is_limited:
            total_count += 1 << (len(string)-index-1)
        elif digit == string[index]:
            total_count += count_valid(index+1, False)
        elif digit < string[index]:
            total_count += count_valid(index+1, True)
    return total_count

string = input()
print(count_valid(0, False))
