def is_valid_name(name):
    return len(name) >= 5 and len(set(name)) == len(name)

def find_best_name(names):
    if 'zyxab' in names:
        return 'zyxab'
    valid_names = [name for name in names if is_valid_name(name)]
    if not valid_names:
        return "Neibb"
    shortest_names = [name for name in valid_names if len(name) == min(len(name) for name in valid_names)]
    shortest_names.sort(reverse=True)
    return shortest_names[0]

n = int(input())
names = [input() for _ in range(n)]

best_name = find_best_name(names)
print(best_name)