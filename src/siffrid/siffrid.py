def smallest_number(digits, target):
    num = [0] * digits
    target -= 1
    for i in range(digits - 1, 0, -1):
        add = min(9, target)
        num[i] = add
        target -= add
    num[0] = target + 1
    return int("".join(map(str, num)))

def largest_number(digits, target):
    num = []
    for _ in range(digits):
        add = min(9, target)
        num.append(str(add))
        target -= add
    return int("".join(num))

def find_numbers(n):
    digits, nsum = len(n), sum(int(i) for i in n)
    smallest = smallest_number(digits, nsum)
    largest = largest_number(digits, nsum)
    print(smallest, largest)

n = input()
find_numbers(n)
