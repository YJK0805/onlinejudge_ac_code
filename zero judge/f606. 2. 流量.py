n,m,K = map(int,input().split())
arr = [[int(x) for x in input().split()] for i in range(n)]
ans = 100000000
for time in range(K):
	c = [int(x) for x in input().split()]
	cnt = [[0 for i in range(m)] for j in range(m)]
	for i in range(n):
		for j in range(m):
			cnt[c[i]][j] += arr[i][j]
	cost = 0
	for i in range(m):
		for j in range(m):
			if i == j:
				cost += cnt[i][j]
			elif cnt[i][j] <= 1000:
				cost += cnt[i][j] * 3
			else:
				cost += 1000 + cnt[i][j] * 2
	ans = min(ans,cost)
print(ans)