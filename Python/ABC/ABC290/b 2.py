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
n,k = list(map(int,input().split()))
s = input()
ans_s =""
for i in range(n):
  if s[i] == 'o':
    if k > 0:
      ans_s += 'o'
      k -= 1
    else:
      ans_s += 'x'
  else:
    ans_s += 'x'

print(ans_s)