s = input()
for i in range(1,abs(len(s))//2+1):
  print(s[2*i-1]+s[(2*i-1)-1],end="")
  