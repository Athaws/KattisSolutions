lst = {'A', 'E', 'I', 'O', 'U'}
out = lambda input: "Jebb" if lst.intersection(input) else "Kannski" if input == 'Y' else "Neibb"
print(out(input()))