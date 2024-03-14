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
def check(pas,v,ind):
  pas[ind] = 1
  if  0 not in pas:
    if 1 in v[ind]:
      no()
    else:
      yes()
    sys.exit()
  for i in v[ind]:
    if pas[i] == 0:
      check(pas,v,i)
      
      
n,m = list(map(int,input().split()))
v = [[] for i in range(n+1)]
pas = [0 for i in range(n+1)]
pas[0] = 1
if m  != (n-1):
  no()
  sys.exit()
for i in range(m):
  a,b = list(map(int,input().split()))
  v[a].append(b)
  v[b].append(a)

check(pas,v,1)
no()