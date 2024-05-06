h, w, n = map(int,input().split())
bricks = [int(x) for x in input().split()]

comp = 0
while comp < h:
    curr = 0
    while curr < w and bricks:
        curr += bricks.pop(0)
        if not bricks and curr < w or bricks and curr + bricks[0] > w and curr != w:
            print('NO')
            exit(0)        
    comp += 1
print('YES')