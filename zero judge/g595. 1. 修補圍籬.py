n = int(input())
arr = [int(x) for x in input().split()]
ans = 0
for i in range(n):
	if arr[i] == 0:
		if i == 0:
			ans += arr[1]
		elif i == n - 1:
			ans += arr[i - 1]
		else:
			ans += min(arr[i - 1],arr[i + 1])
print(ans)
		