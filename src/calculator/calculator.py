from sys import stdin
for line in stdin:
    try:
        print(f"{eval(line.strip().replace(' ', '')): .2f}")
    except:
        exit()