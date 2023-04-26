from sys import stdin
for read in stdin:
	n,m = map(int,read.split())
	arr = []
	for i in range(n):
		arr.append([int(x) for x in input().split()])
	for i in range(m):
		for j in range(n):
			print(arr[j][i],end = ' ')
		print()