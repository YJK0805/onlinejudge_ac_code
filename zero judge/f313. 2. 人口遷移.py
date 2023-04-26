r,c,K,m = map(int,input().split())
arr = [[] for i in range(r)]
for i in range(r):
	arr[i] = [int(x) for x in input().split()]
dis = [[0,-1],[1,0],[0,1],[-1,0]]
cnt = [[0] * c for i in range(r)]
for times in range(m):
	for i in range(r):
		for j in range(c):
			cnt[i][j] = arr[i][j]
			if cnt[i][j] < 0:
				continue
			num = arr[i][j] // K
			for k in range(4):
				x,y = i + dis[k][0],j + dis[k][1]
				if x >= 0 and x < r and y >= 0 and y < c and arr[x][y] >= 0:
					cnt[i][j] += (arr[x][y] // K) - num
	arr,cnt = cnt,arr
ans1,ans2 = 0,1e8
for i in range(r):
	for j in range(c):
		if arr[i][j] != -1:
			ans1,ans2 = max(ans1,arr[i][j]),min(ans2,arr[i][j])
print(ans2,ans1,sep='\n')