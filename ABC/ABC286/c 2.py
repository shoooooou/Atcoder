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
n,a,b = list(map(int,input().split()))
s = input()
rs = s[::-1]
ans = float('inf')
for i in range(n):
  cnt = 0
  for j in range(n//2):
    if s[j] != rs[j]:
      cnt += 1
  # print(s)
  # print("i=" + str(i))
  # print("cnt=" + str(cnt))
  ans = min(ans,i*a + cnt*b)
  s = s + s[0]
  s = s[1:]
  rs = s[::-1]
      
print(ans)



