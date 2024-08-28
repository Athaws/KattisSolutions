from collections import Counter

def has_pair_with_sum(arr, target_sum):
    seen_numbers = set()
    for number in arr:
        complement = target_sum - number
        if complement in seen_numbers:
            return True
        seen_numbers.add(number)
    return False

def all_values_unique(array):
    return len(array) == len(set(array))

def find_multi_occuring_number(array):
    most_common, count = Counter(array).most_common(1)[0]
    return most_common if count > len(array)//2 else -1

def print_median(array):
    array.sort()
    if len(array) % 2 == 0:
        print(array[len(array)//2-1], array[(len(array)//2)])
    else:
        print(array[len(array)//2])

def print_100_to_999(array):
    array.sort()
    array = [str(x) for x in array if 100 <= x <= 999]
    print(' '.join(array))

n, t = map(int, input().strip().split())
array = [int(x) for x in input().strip().split()]

match(t):
    case 1:
        print('Yes' if has_pair_with_sum(array, 7777) else 'No')
    case 2:
        print('Unique' if all_values_unique(array) else 'Contains duplicate')
    case 3:
        print(find_multi_occuring_number(array))
    case 4:
        print_median(array)
    case 5:
        print_100_to_999(array)
