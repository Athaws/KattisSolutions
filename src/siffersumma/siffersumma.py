def digit_sum(n):
    total = 0
    while n > 0:
        total += n % 10
        n //= 10
    return total

def siffersumma(n):
    digits = [*map(int, str(n))]
    pair = None
    
    for i in range(len(digits) - 1, -1, -1):
        if pair: continue
        if digits[i]:
            for j in range(i - 1, -1, -1):
                if digits[j] < 9:
                    pair = (i, j)
                    break
    
    if pair:
        digits[pair[0]] -= 1
        digits[pair[1]] += 1
        digits[pair[1] + 1:] = sorted(digits[pair[1] + 1:])
    else:
        total_sum = sum(digits) - 1
        digits = [1] + [0] * len(digits)
        position = len(digits) - 1
        
        while total_sum:
            value = min(9, total_sum)
            total_sum -= value
            digits[position] = value
            position -= 1
    
    return int(''.join(map(str, digits)))

n = int(input())
print(siffersumma(n))