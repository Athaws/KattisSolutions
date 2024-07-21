lst = [x+1 for x in range(1000)]

answer = ''
while answer != 'correct':
    if answer == 'lower':
        lst = lst[:i]
    elif answer == 'higher':
        lst = lst[i:]
    
    i = len(lst) // 2
    print(lst[i], flush=True)
    answer = input().strip()