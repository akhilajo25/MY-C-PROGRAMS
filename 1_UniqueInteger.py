#!/bin/python3

import sys

def lonelyinteger(a):
    temp=0
    for i in range(0,n):
        temp=temp^a[i]
    return temp
    # Complete this function

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
result = lonelyinteger(a)
print(result)
