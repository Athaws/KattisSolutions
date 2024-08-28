import string

def check_testcase(testcase: str):
    for i, ch in enumerate(testcase):
        if ch in string.ascii_uppercase and i != 0:
            return False
    return True

p, t = map(int, input().split())
print(sum(1 if all([check_testcase(input()) for _ in range(t)]) else 0 for _ in range(p)))