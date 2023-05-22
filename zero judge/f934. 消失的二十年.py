nums = [int(x) for x in input().split()]
ma,mi = 0,2147483647
for x in nums:
	if x < mi:
		mi = x
	else:
		ma = max(ma,x - mi)
print(ma)	