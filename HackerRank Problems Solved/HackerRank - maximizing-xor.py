l = int(input())
r = int(input())
print((1<<((l^r).bit_length()))-1)
