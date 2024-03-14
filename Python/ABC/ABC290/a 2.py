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
n,m = list(map(int,input().split()))
a = list(map(int,input().split()))
b = list(map(int,input().split()))
sum = 0
for i in range(m):
  sum += a[b[i]-1]
  
print(sum)