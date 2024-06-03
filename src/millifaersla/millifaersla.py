min = 10e9+1
x1, x2, x3 = int(input()), int(input()), int(input())
if x1 < min:
    min = x1
if x2 < min:
    min = x2
if x3 < min:
    min = x3

if min == x1:
    print('Monnei')
elif min == x2:
    print('Fjee')
elif min == x3:
    print('Dolladollabilljoll')