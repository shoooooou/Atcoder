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
n,x = list(map(int,input().split()))
a = []
b = []
for i in range(n):
  c,d = list(map(int,input().split()))
  a.append(c)
  b.append(d)

dp = [[0 for i in range(10+10 ** 4)] for j in range(n+1)]
for i in range (n+1):
  dp[i][0] = 1
for i in range(1,n+1):
  for j in range(10 ** 4+1):
    if dp[i-1][j] == 1:
      for k in range(b[i -1]+1):
        if j+a[i-1]*k <= x:
          dp[i][j+a[i-1]*k] = 1

for i in range(1,n+1):
  if dp[i][x] == 1:
    yes()
    sys.exit()
no()