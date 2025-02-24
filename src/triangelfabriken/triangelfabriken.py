nums = [int(input()), int(input()), int(input())]
print('Trubbig' if any(n > 90 for n in nums) else 'Ratvinklig' if any(n == 90 for n in nums) else 'Spetsig', end=' ')
print('Triangel')