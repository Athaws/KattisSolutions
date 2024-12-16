result = []
for _ in range(int(input())):
    reason, value = input(), int(input())
    result.append(value)
total = sum(result)
print('Nekad' if total < 0 else 'Usch, vinst' if total > 0 else 'Lagom')