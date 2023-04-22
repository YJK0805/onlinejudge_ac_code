n = int(input())
arr = [int(x) for x in input().split()]
vis = [False] * n
ans = 0
for i in range(n):
	if vis[i]:
		continue
	ans += 1
	vis[i] = True
	p = arr[i]
	while p != i:
		vis[p] = True
		p = arr[p]
print(ans)