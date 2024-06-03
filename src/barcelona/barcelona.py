l1,l2 = [int(c) for c in input().strip().split()], [int(c) for c in input().strip().split()]
n, k = l1[0], l1[1]
place  = l2.index(k) + 1
print('fyrst' if place == 1 else 'naestfyrst'if place == 2 else f'{place} fyrst')