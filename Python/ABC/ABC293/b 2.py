n = int(input())
a = list(map(int,input().split()))
flag = [0 for i in range(n)]

for human in range(n):
  if flag[human] == 0:
    flag[a[human]-1] = 1

print(flag.count(0))
for human in range(n):
  if flag[human] == 0:
    print(human+1,end=" ")