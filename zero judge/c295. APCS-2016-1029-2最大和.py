n,m = map(int,input().split())
ans = [0] * n
for i in range(n):
	arr = [int(x) for x in input().split()]
	ans[i] = max(arr)
S = sum(ans)
print(S)
out = [x for x in ans if S % x == 0]
if len(out) != 0:
	print(*out)
else:
	print(-1)