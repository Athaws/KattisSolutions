line = input().strip().split()
stack = []
for token in line:
    if token in "+-*/":
        b = stack.pop()
        a = stack.pop()
        expr = f"({a}{token}{b})"
        stack.append(expr)
    else:
        stack.append(token)
print("".join(stack))