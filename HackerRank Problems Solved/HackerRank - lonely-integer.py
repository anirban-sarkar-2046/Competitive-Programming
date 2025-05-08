import operator, functools

n = int(input())
a = list(map(int, input().split()))
print(functools.reduce(operator.xor, a))
