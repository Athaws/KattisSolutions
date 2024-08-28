words = input().split()
count = 0
for word in words:
    if word.find('ae') != -1:
        count += 1
print('dae ae ju traeligt va' if count >= 0.4*len(words) else 'haer talar vi rikssvenska')