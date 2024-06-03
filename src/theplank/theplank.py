num = int(input())
planks = lambda input: 1 if input == num else 0 if input > num else planks(input + 1) + planks(input + 2) + planks(input + 3)
print(planks(0))