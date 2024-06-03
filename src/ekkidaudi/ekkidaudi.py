in1, in2 = input().split('|'), input().split('|')

for i in range(len(in1)):
    print(in1.pop(0) + in2.pop(0),end=" ")