odds = [1,2,3,4,5,6,5,4,3,2,1]
hotels, distances = int(input()), map(lambda x: odds[int(x)-2], input().split())
print(f"{sum(distances)/36:.6f}")
