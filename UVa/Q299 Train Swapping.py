t = int(input())
while t:
	t -= 1
	ans = 0
	n = int(input())
	train = [int(x) for x in input().split()]
	for i in range(n):
		for j in range(n - i - 1):
			if train[j] > train[j + 1]:
				ans += 1
				train[j],train[j + 1] = train[j + 1],train[j]
	print(f'Optimal train swapping takes {ans} swaps.')