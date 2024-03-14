h,w = list(map(int,input().split()))
a = [list(map(int,input().split())) for i in range(h)]
ans = 0
keiro_num = h+w-2

for bin in range(2**keiro_num-1):
  bin_str = format(bin,'08b')
  if bin_str.count('1') == h-1:
    num_set = set()
    x = 0
    y = 0
    num_set.add(a[y][x])
    for shift in range(keiro_num):
      if (bin>>shift) & 1:
        y += 1
        num_set.add(a[y][x])
      else:
        x += 1
        num_set.add(a[y][x])
    if len(num_set) == keiro_num+1:
      ans += 1
print(ans)
