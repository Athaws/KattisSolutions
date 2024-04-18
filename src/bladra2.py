inp=input().split(' ')
v,a,t=int(inp[0]),int(inp[1]),int(inp[2])
print(f'{v*t+(a*pow(t,2))/2:5f}')