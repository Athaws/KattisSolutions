line=''.join([c if c.isalnum() else '' for c in input().lower()])
print('Palindrome' if any(c in line[i+1:i+3] for i, c in enumerate(line)) else 'Anti-palindrome')