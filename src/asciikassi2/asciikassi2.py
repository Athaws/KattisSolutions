multiplier = int(input())

print(' ' * (multiplier+1) + 'x')
for i in range(multiplier):
    print(' ' * (multiplier-i) + '/' + ' ' * (2*i+1) + '\\')
print('x' + ' ' * (2*multiplier+1) + 'x')
for i in range(multiplier):
    print(' ' * (i+1) + '\\' + ' ' * (2*(multiplier-i)-1) +'/')
print(' ' * (multiplier+1) + 'x')