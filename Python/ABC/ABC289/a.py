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
s = input()
for i in s:
  if i == '0':
    print(1,end='')
  else:
    print(0,end='')