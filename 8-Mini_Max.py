#!/bin/python3

import sys

def miniMaxSum(arr):
    #print(arr)
    global_s=[]     # a list to store all the sums
   
    for i in arr:
        glob_sum=0
        for j in arr:
            #print(i)
            glob_sum=glob_sum+j
            #print(glob_sum)
        glob_sum=glob_sum-i
        global_s.append(glob_sum)
    #print(global_s)
    global_s.sort()
    #print(global_s)
    print(min(global_s),max(global_s))
 
        
        
        
        
    # Complete this function

if __name__ == "__main__":
    arr = list(map(int, input().strip().split(' ')))
    miniMaxSum(arr)
