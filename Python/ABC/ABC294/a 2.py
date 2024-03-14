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
a = list(map(int,input().split()))
for num in a:
  if num % 2 == 0:
    print(num,end=" ")