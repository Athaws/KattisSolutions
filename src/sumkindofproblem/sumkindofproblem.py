for _ in range(int(input())):
    case, n = map(int, input().split())
    print(case, sum(range(n+1)), n**2, n**2+n)