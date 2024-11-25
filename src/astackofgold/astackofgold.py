w, s = map(int, input().split())
c = s*(s+1)//2
print(c - (29370*c - w) // 110)