for i in range(int(input())):
    try:
        print(sum(list(map(int, input().strip().split('+')))))
    except:
        print('skipped')