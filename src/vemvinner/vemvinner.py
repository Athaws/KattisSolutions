def check_winner(lst: list):
    # row
    if any(all(cell == 'X' for cell in row) for row in lst):
        return 'Johan'
    if any(all(cell == 'O' for cell in row) for row in lst):
        return 'Abdullah'
    
    # col
    if any(all(lst[row][col] == 'X' for row in range(3)) for col in range(3)):
        return 'Johan'
    if any(all(lst[row][col] == 'O' for row in range(3)) for col in range(3)):
        return 'Abdullah'

    # dia
    if all(lst[i][i] == 'X' for i in range(3)) or all(lst[i][2-i] == 'X' for i in range(3)):
        return 'Johan'
    if all(lst[i][i] == 'O' for i in range(3)) or all(lst[i][2-i] == 'O' for i in range(3)):
        return 'Abdullah'

    # no winner
    return 'ingen'

lst = []
for i in range(3):
    lst.append(input().split())
winner = check_winner(lst)
print(winner, 'har vunnit')