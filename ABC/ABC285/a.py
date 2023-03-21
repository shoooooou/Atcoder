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
a,b = list(map(int,input().split()))
if a > b:
  if b * 2 == a or b * 2 + 1 == a:
    yes()
  else:
    no()
else:
  if a * 2 == b or a * 2 + 1 == b:
    yes()
  else:
    no()
  