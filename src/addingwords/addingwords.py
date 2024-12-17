definitions = dict()
while True:
    try: cmd = input()
    except: exit()
    if 'clear' in cmd:
        definitions = dict()
        continue
    parts = cmd.split()
    if parts[0] == 'def':
        definitions[parts[1]] = parts[2]
    elif parts[0] == 'calc':
        try:
            values = [definitions[p] for i, p in enumerate(parts[1:-1]) if i % 2 == 0]
            operators = [p for i, p in enumerate(parts[1:-1]) if i % 2 == 1]
            command = ''
            for i in range(len(operators)):
                command += f'({str(values[i])})'
                command += operators[i]
            command += f'({str(values[-1])})'
            print(' '.join(parts[1:]), list(definitions.keys())[list(definitions.values()).index(str(eval(command)))])
        except Exception:
            print(' '.join(parts[1:]), 'unknown')
    else:
        exit()