n = int(input())
print(1<<bin(~n&((1<<n.bit_length())-1)).count('1'))
