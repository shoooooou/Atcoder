def yes():
  print('Yes')
def no():
  print('No')
import sys
import itertools
import math as mt
import copy
import collections as col
import bisect
sys.setrecursionlimit(10**6)
n,p,q,r,s = list(map(int,input().split()))
a = list(map(int,input().split()))

for i in range(p,q+1):
  # print("aaa")
  a[i-1], a[r-1] = a[r-1], a[i-1] 
  r += 1
for i in a:
 print(i,end=' ')