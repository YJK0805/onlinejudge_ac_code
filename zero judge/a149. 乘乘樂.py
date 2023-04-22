t = int(input())
for i in range(t):
	ans = 1
	str = input()
	for j in str:
		ans *= int(j)
	print(ans)