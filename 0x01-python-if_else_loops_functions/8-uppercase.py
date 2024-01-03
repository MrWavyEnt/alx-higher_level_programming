#!/usr/bin/python3
def uppercase(str):
    res = ''
    for i in range(len(str)):
        if 'a' <= str[i] <= 'z':
            res += chr(ord(str[i]) - 32)
        else:
            res += str[i]
   print(res)
   print()

