import math
for _ in range(int(input())):
    num = int(input())
    print(
        "OS" if num % 2 != 0 and math.sqrt(num).as_integer_ratio()[1] == 1 else
        "S"  if math.sqrt(num).as_integer_ratio()[1] == 1 else
        "O" if num % 2 != 0 else
        "EMPTY"
        )