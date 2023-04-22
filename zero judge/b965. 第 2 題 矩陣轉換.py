from sys import stdin
for read in stdin:
	r,c,m = map(int,read.split())
	mat = [[0] * 20 for i in range(20)]
	tem = [[0] * 20 for i in range(20)]
	for i in range(r):
		t = [int(x) for x in input().split()]
		for j in range(c):
			mat[i][j] = t[j]
	op = [int(x) for x in input().split()]
	for i in op[::-1]:
		if i == 1:
			for j in range(r // 2):
				mat[j],mat[r - 1 - j] = mat[r - 1 - j],mat[j]
		else:
			for j in range(c):
				for k in range(r):
					tem[j][k] = mat[k][c - 1 - j]
			r,c = c,r
			for j in range(r):
				for k in range(c):
					mat[j][k] = tem[j][k]
	print(r,c)
	for i in range(r):
		print(*mat[i][:c])