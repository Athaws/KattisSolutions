import sys

def add(a, b, mod):
    return str((a + b) % mod) + '\n'

def sub(a, b, mod):
    return str((a - b) % mod) + '\n'

def mul(a, b, mod):
    return str((a * b) % mod) + '\n'

def div(a, b, mod):
    try:
        return str((a * pow(b, -1, mod)) % mod) + '\n'
    except:
        return '-1\n'

if __name__ == "__main__":
    input = sys.stdin.read
    print = sys.stdout.write
    lines = iter(input().splitlines())
    while True:
        line = next(lines).strip()
        if line == "0 0":
            exit()
        mod, n = map(int, line.split())

        for _ in range(n):
            a, op, b = next(lines).split()
            a, b = int(a), int(b)

            if op == "+":
                print(add(a, b, mod))
            elif op == "-":
                print(sub(a, b, mod))
            elif op == "*":
                print(mul(a, b, mod))
            elif op == "/":
                print(div(a, b, mod))