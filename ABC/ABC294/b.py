def yes():
  print('Yes')
def no():
  print('No')
import string
import sys
import itertools
import math as mt
import copy
import collections as col
import bisect
sys.setrecursionlimit(10**6)
h,w = list(map(int,input().split()))
a = [list(map(int,input().split())) for i in range(h)]
mozi = string.ascii_uppercase
for y in range(h):
  for x in range(w):
    if a[y][x] == 0:
      print('.',end="")
    else:
      print(mozi[a[y][x] - 1],end="")
  print()

