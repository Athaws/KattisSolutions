import math
def gcd(a, b, k):
    while b != 0:
        if a <= k and b <= k:
            break
        a, b = b, a % b
    return f"{max(a, b)} {min(a, b)}"

a, b, k = map(int, input().split())
print(gcd(a, b, math.sqrt(k)))