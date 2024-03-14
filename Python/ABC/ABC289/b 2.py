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
re = list(map(int,input().split()))
num = [i for i in range(1,n+1)]
que = col.deque();
for i in range(len(num)):
  que.append(num[i])
  if (i+1) not in re:
    while que:
      print(que.pop(),end=' ')
      