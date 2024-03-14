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
a_num,b_num = list(map(int,input().split()))
a = list(map(int,input().split()))
b = list(map(int,input().split()))
ans_a = list()
ans_b = list()
ind_a = 0
ind_b = 0
while(ind_a < len(a) and ind_b < len(b)):
  if(a[ind_a] < b[ind_b]):
    ind_a += 1
    ans_a.append(ind_a+ind_b)
  else:
    ind_b += 1
    ans_b.append(ind_a+ind_b)

if ind_a < len(a):
  for i in range(ind_a,len(a)):
    ans_a.append(i+1+ind_b)

if ind_b < len(b):
  for i in range(ind_b,len(b)):
    ans_b.append(i+1+ind_a)

for i in ans_a:
  print(i,end=" ")
print()
for i in ans_b:
  print(i,end=" ")
  