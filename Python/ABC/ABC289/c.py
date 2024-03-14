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
list_s = [[] for i in range(m)]
for i in range(m):
  length = int(input())
  list_s[i] = list(map(int,input().split()))

cnt_ans = 0
for bit_val in range(1,2**m):
  flag = True
  for search_val in range(1,n+1):
    if not flag:
      break
    for shift in range(m):
      if ((bit_val >> shift) & 1):
        if search_val in list_s[shift]:
          if search_val == n:
            cnt_ans += 1
          break
      if shift == m-1:
        flag = False
print(cnt_ans)