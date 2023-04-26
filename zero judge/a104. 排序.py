from sys import stdin
for read in stdin:
	n = int(read)
	arr = [int(x) for x in input().split()]
	arr.sort()
	print(*arr)