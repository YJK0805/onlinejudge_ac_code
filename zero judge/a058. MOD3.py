n = int(input())
ans = [0] * 3
for i in range(n):
	num = int(input())
	ans[num % 3] += 1
print(*ans)