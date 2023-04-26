n = int(input())
arr = []
for i in range(n):
	arr.append([int(x) for x in input().split()])
arr.sort()
for i in arr:
	print(*i)