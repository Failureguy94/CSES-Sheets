import sys
n=int(input())
v=list(map(int, sys.stdin.readline().split()))
v.sort()
med=v[n//2]
ans=0
for num in v:
     ans+=abs(med-num)
print(ans)