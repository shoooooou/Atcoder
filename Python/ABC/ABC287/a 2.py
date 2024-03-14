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
cnty = 0
cntn = 0
for i in range(n):
  s = input()
  if s == "For":
    cnty += 1
  else:
    cntn += 1
if cnty > cntn:
  yes()
else:
  no()