s = int(input())
hrs, remainder = divmod(s, 3600)
mins, secs = divmod(remainder, 60)
print(f"{hrs} : {mins} : {secs}")