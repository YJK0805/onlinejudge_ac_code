n,m = map(int,input().split())
arr = [[] * m for i in range(n)]
minx,miny,minval = -1,-1,1000010
for i in range(n):
	arr[i] = [int(x) for x in input().split()]
	for j in range(m):
		if arr[i][j] < minval:
			minval,minx,miny = arr[i][j],i,j
ans = 0
dis = [[0,-1],[0,1],[-1,0],[1,0]]
vis = [[True] * m for i in range(n)]
while minx != -1 and miny != -1:
	ans += arr[minx][miny]
	vis[minx][miny],nowx,nowy,nowmin = False,-1,-1,1000010
	for i in range(4):
		x,y = minx + dis[i][0],miny + dis[i][1]
		if x >= 0 and x < n and y >= 0 and y < m and vis[x][y] and arr[x][y] < nowmin:
			nowx,nowy,nowmin = x,y,arr[x][y]
	if nowx != -1 and nowy != -1:
		minx,miny = nowx,nowy
	else:
		break
print(ans)