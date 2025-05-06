s = input()
a = int(s[:2])
if s[-2]=='A' and a==12: a=0
if s[-2]=='P' and a!=12: a+=12
print(('0' if a<10 else '')+str(a)+s[2:-2])
