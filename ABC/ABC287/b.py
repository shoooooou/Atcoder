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
s6 = ["" for i in range(n)]
s3 = ["" for i in range(m)]

for i in range(n):
  s6[i] = input()
  
for i in range(m):
  s3[i] = input()

cnt = 0
for i in s6:
  for j in s3:
    if i[len(i)-3:len(i)] == j:
      cnt += 1
      break
print(cnt)