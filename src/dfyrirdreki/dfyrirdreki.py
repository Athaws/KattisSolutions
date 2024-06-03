a,b,c = int(input()),int(input()),int(input())

discriminant = b**2 - 4*a*c

print(2 if discriminant > 0 else 1 if discriminant == 0 else 0)