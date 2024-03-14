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
n = int(input())
s = input()
for i in range(1,n):
  max = 0
  for j in range(n-i):
    if s[j] == s[j + i]:
      break
    else:
      max = j + 1
  print(max)