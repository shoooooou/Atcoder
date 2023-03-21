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
import string
sys.setrecursionlimit(10**6)
alpha = list(string.ascii_uppercase)
s = input()
sr = s[::-1]
ans = 0
for i in range(len(s)):
  ans += (alpha.index(sr[i]) + 1) *  26 ** i

print(ans)

