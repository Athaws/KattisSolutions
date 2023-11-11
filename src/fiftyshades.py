count = 0
for i in range(int(input())):
    inp = input().lower()
    if inp.__contains__('pink') or inp.__contains__('rose'):
        count = count + 1
if count == 0:
    print('I must watch Star Wars with my daughter')
else:
    print(count)