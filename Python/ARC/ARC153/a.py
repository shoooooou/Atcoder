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
a,b,c,d,e,f = str(100000 + (n - 1))
ans = "".join((a,a,b,c,d,d,e,f,e))
print