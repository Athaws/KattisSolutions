g, s, c = map(int, input().strip().split())

buyingpower = g*3 + s*2 + c*1
out = ''
if buyingpower >= 8:
    out += 'Province'
elif buyingpower >= 5:
    out += 'Duchy'
elif buyingpower >= 2:
    out += 'Estate'
if out:
    out += ' or '
if buyingpower >= 6:
    out += 'Gold'
elif buyingpower >= 3:
    out += 'Silver'
else:
    out += 'Copper'
print(out)