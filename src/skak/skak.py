print(2 if len(set(map(int, input().split())).intersection(map(int, input().split()))) == 0 else 1)