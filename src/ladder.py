from math import sin, ceil, radians

inp = input().split(" ")
print(ceil(int(inp[0]) / sin(radians(int(inp[1])))))