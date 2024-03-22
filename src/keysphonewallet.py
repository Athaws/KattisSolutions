items = int(input())
item_list = [input() for i in range(items)]

out = list()
if 'keys' not in item_list:
    out.append('keys')
if 'phone' not in item_list:
    out.append('phone')
if 'wallet' not in item_list:
    out.append('wallet')

if not out: print('ready')
else: print('\n'.join(out))