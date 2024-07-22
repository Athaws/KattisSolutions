for _ in range(int(input())):
    line = input()
    print(line.replace('simon says ', '') if line.startswith('simon says ') else '')