n,d = map(int,input().split())
ans1 = 0
ans2 = 0
for i in range(n):
	num = [int(x) for x in input().split()]
	num.sort()
	if num[2] - num[0] >= d:
		ans1 += 1
		ans2 += (sum(num) // 3)
print(ans1,ans2)
		