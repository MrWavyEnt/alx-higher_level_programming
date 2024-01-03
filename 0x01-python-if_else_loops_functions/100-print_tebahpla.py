#!/usr/bin/python3
i in range(ord('z'), ord('a') -1, -2):
    print("{}{}".format(chr(i), chr(i - 33)), end='')
