n, m = map(int,input().split())
d = [[]]
for i in range(n):
	d.append([1,2,6,5,4,3])
for i in range(m):
	a,b = map(int,input().split())
	if b == -2:
		d[a][0],d[a][3],d[a][2],d[a][1] = d[a][3],d[a][2],d[a][1],d[a][0]
	elif b == -1:
		d[a][0],d[a][5],d[a][2],d[a][4] = d[a][5],d[a][2],d[a][4],d[a][0]
	else:
		d[a],d[b] = d[b],d[a]
ans = [d[i][0] for i in range(1,n+1)]
print(*ans)