n, m = map(int, input().split())
if n<m : print(f"Dr. Chaz will have {m-n} piece{'' if m-n == 1 else 's'} of chicken left over!")
else:   print(f"Dr. Chaz needs {n-m} more piece{'' if n-m == 1 else 's'} of chicken!")