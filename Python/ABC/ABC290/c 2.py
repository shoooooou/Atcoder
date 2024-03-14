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
a = list(map(int,input().split()))

a.sort();
a = list(set(a))
comp_num = 0
roop_end = min(k,len(a))
for i in range(roop_end):
  if comp_num == a[i]:
    comp_num += 1
  else:
    print(comp_num)
    sys.exit()
print(comp_num)